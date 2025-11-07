#include <iostream>
using namespace std;

void reverse_Arr(int array[], int sz)
{

    int st = array[0];
    int end = array[sz - 1];

    while (st >= end)
    {
        swap(array[st], array[end]);
        st++;
        end--;
    }
}

int main()
{
    int size = 5;
    int arr[size] = {5, 4, 3, 2, 1};

    for (int val : arr)
    {
        cout << val << endl;
    }

    return 0;
}