#include<iostream>
#include<vector>
using namespace std;

// int binsearch(vector <int> arr,int tar){
//     int st=0, end = arr.size()-1;
//     while(st<=end){
//         // int mid = (st + end)/2; // brute force 
//         // to avoid overflow condition we can use -- >
//         int mid = st + (end-st)/2;
//         if(tar > arr[mid]){
//             st = mid + 1;
//         }
//         else if(tar < arr[mid]){
//             end = mid - 1;
//         }
//         else{
//             return mid;
//         }
//     }

//     return -1;
// }

// binary search using recursion;
int binsearch(vector <int> arr, int tar, int st,int end){
    if(st<= end){
        int mid = st + (end-st)/2;
        if(tar > arr[mid]){
            return binsearch(arr,tar,mid+1,end);
        }
        else if(tar < arr[mid]){
            return binsearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector <int> arr1 = {-1,0,3,4,5,9,12};
    int targ = 4;
    int start = 0, end = arr1.size()-1;
    cout<<binsearch(arr1,targ,start,end);
    return 0;
}