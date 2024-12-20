#include<iostream>
using namespace std;

// void inputArray(int n){
    
//     for(int i=0;i<n;i++){
//         int n;
//         cout<<"enter the arr of elements you want in your arr : ";
//         cin>>n;
//         int arr[n];
//         cout<<"the value at "<<i<<" index is : ";
//         cin>>arr[i];
//     }
// }

// void DisplayArray(int n){
//     for(int j=0;j<n;j++){

        
//         int arr[n];
//         cout<<"the display value at index "<<j<<" : ";
//         cout<<arr[j]<<endl;
//     }
// }

int small(int a[],int size){
    int smallest = INT16_MAX;
    for(int i=0;i<(size);i++){
        smallest = min(smallest,a[i]);
    }
    return smallest;
}

int large(int a[],int size){
    int largest = INT16_MIN;
    for(int i=0;i<(size);i++){
        largest = max(largest,a[i]);
    }
    return largest;
}

int main(){
    
    int n;
    cout<<"enter the arr of elements you want in your arr : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"the value at "<<i<<" index is : ";
        cin>>arr[i];
    }

    cout<<endl;

    for(int j=0;j<n;j++){
        cout<<"the display value at index "<<j<<" : ";
        cout<<arr[j]<<endl;
    }

    cout<<endl;
    // cout<<inputArray(n)<<endl;
    // cout<<DisplayArray(n)<<endl;
    cout<<"min : "<<small(arr,n)<<endl;
    cout<<"max : "<<large(arr,n)<<endl;
    return 0;
}
