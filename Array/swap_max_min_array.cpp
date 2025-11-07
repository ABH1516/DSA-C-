#include<iostream>
#include <climits>
using namespace std;

void swap_small_large_element_array(int array[], int size)
{

    int small = INT_MAX;
    int large = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        small = min(array[i], small);
        large = max(array[i], large);
    }
    
    cout << "smallest: " << small;
    cout << endl;
    cout << "largest: " << large;

    swap(small,large);
    cout << endl;

    cout << "smallest: " << small;
    cout << endl;
    cout << "largest: " << large;
}
 
int main()
{
    int sz = 5;
    int arr[sz] = {11, 2, 5, 6, 1};
    swap_small_large_element_array(arr,sz);

    
    return 0;
}