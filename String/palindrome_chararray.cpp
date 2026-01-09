#include<iostream>
#include<string>
#include<vector>
#include <cstring>
using namespace std;

int reverse_str(char arr[]){
    int st = 0;
    int end = strlen(arr) - 1;
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

bool isPalindrome(char s[]){

    if(reverse_str(s)){
        return true;
    }
    else{
        return false;
    }
}
 
int main()
{
    char str[] = "racecar";
    if(isPalindrome(str)){
        cout << "yes its a palindrome string" << endl;
    }
    else{
        cout << "no its not a palindrome string" << endl;
    }
    return 0;
}