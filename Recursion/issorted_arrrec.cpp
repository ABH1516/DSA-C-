#include<iostream>
using namespace std;

bool isSorted(int arr[] , int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[n-1] >= arr[n-2] && isSorted(arr, n-1)){
        return true;
    }

    return false;

}
 
int main()
{
    int n = 5;
    int arr[] = {1,8,3,4,5};
    if(isSorted(arr,n)){
        cout << "array is sorted !";
    }else{
        cout << "array is not sorted !";
    }
    return 0;
}