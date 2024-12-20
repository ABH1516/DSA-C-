#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr,int n, int m,int maxposval){ // 2,1,3,4 mid = 5
    int st = 1; 
    int pages = arr[0];
    for(int i=1;i<=n;i++){
        if(st > m){
            return false;
        }
        else{
            if(pages > maxposval){
                st++;
                pages = arr[i-1];                                                      
                pages +=  arr[i];  
            }else{
                pages +=  arr[i];  // st = 2 , pg = 3;
            }   
        }
    }
    return true;
}

int  newrange(vector<int> arr,int n, int m){
    int st=0; 
    int end=0;
    for(int i=0;i<n;i++){
        end += arr[i];
    }
    
    int ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(m>n){
            return -1;
        }

        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1; 
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
   vector<int> bookpages = {2,1,3,4};
   int n = 4;
   int m = 2;

   cout<<newrange(bookpages,n,m);
   return 0;
}