#include<iostream>
#include<cstring>
using namespace std;

// can use reverse function of stl to reverse the string using begin() and end()
// reverse(str.begin(), str.end());

int reverse_str(char arr[]){
    int st = 0;
    int end = strlen(arr) - 1;
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}
 
int main()
{
    char str[] = "Hello";
    reverse_str(str);
    cout << str << endl;
    return 0;
}