#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string rev_str(string str){
    reverse(str.begin(), str.end());
    return str;
}


bool isPalindrome(string str){

    if(rev_str(str) == str){
        return true;
    }
    else{
        return false;
    }
}
 
int main()
{
    string str = "ab55ba";
    if(isPalindrome(str)){
        cout << "yes its a palindrome string" << endl;
    }
    else{
        cout << "no its not a palindrome string" << endl;
    }
    return 0;
}