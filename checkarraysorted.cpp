#include<iostream>
#include<vector>
using namespace std;

// checking if array is sorted or not 

bool isSorted(vector<int> v, int n){
    if(n == 0 || n == 1){
        return true;
    }

    return v[n-1] >= v[n-2]  && isSorted(v,n-1);
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    cout<<isSorted(arr,5);
   return 0;
}