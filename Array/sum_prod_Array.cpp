#include<iostream>
using namespace std;

int sumArray(int* arr, int sz){

    int sum = 0;

    for(int i=0; i<sz; i++){
        sum += arr[i];

    }

    return sum;
    
}

int ProductArray(int* arr, int sz){

    int prod = 1;

    for(int i=0; i<sz; i++){
        prod *= arr[i];

    }

    return prod;
    
}
 
int main()
{
    int sz = 5;
    int a[sz] = {3,4,5,6,2};

    cout << "sum of array is : " << sumArray(a,sz) << endl;
    cout << "product of array is : " << ProductArray(a,sz) << endl;


    return 0;
}