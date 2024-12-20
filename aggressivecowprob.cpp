#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int> &arr,int n, int m,int maxposval){
    
    
    int cows = 1;
    int laststallplaced = arr[0];
    
    for(int i=1;i<n;i++){    //  mid 2
        
        if( (arr[i] - laststallplaced)  >= maxposval){  
            cows++;
            laststallplaced = arr[i];   // 2
                
        }
        if(cows == m) return true;  
        
    }
    return false;
}

int  range(vector<int> &arr,int n, int m){  
    std::sort(arr.begin(), arr.end());

    if(m>n){
        return -1;
    }
    
    int st=1;
    int end=arr[n-1] - arr[0];
    
    
    int ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;   // mid 1 + 2-1/2 --> 2
 
        if(ispossible(arr,n,m,mid)){  // mid 2
            ans = mid;   
            st = mid + 1;
        }else{
            end = mid - 1;  // st = 1 , end = 2,
        }
        
    }

    return ans;
}
int main()
{  
   vector<int> cowpos = {1,2,8,4,9};
   int n=5;
   int cow = 3;
   cout<<"ans : "<<range(cowpos,n,cow);
   return 0;
}