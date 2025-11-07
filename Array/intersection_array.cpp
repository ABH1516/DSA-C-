#include<iostream>
using namespace std;

void print_intersection_arr(int arr[], int arr2[], int sz){

    for(int i = 0; i < sz; ++i){
        for(int j=0;j<sz;++j){
            if(arr[i] == arr2[j]){
                cout << arr[i] << " ";
            }
        }
    }
}
 
int main()
{
    int sz = 5;
    int a1[sz] = {1,2,3,4,5};
    int a2[sz] = {3,5,7,8,1};

    print_intersection_arr(a1,a2,sz);

    
    return 0;
}