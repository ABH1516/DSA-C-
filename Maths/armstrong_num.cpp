#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
    int copyNum = num;
    int sumofDigits_to_pow_cnt = 0;

    int cnt = (num == 0) ? 1 : (int)(log10(num) + 1);
    
    while( num != 0){
        int digit = num % 10;
        sumofDigits_to_pow_cnt += (int)(pow(digit, cnt) + 0.5);
        num /= 10;
    }

    return sumofDigits_to_pow_cnt == copyNum;

}
 
int main()
{
    int n = 9474;

    if(isArmstrong(n)){
        cout << n << " is an armstrong number";
    }
    else{
        cout << n << " it s not an armstrong number";
    }
    return 0;
}