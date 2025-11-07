#include<iostream>
using namespace std;

int prod_Digit(int n){

    int prod = 1;

    while(n != 0){
        int dig = n % 10;
        prod *= dig;
        n /= 10;
    }

    return prod;

}

int sum_Digit(int n){

    int sum = 0;

    while(n != 0){
        int dig = n % 10;
        sum += dig;
        n /= 10;
    }

    return sum;

}



int cnt_Digit(int n){

    int count = 0;

    while(n != 0){
        int dig = n % 10;
        count++;
        n /= 10;
    }

    return count;

}

void printDigits(int n){
    while(n != 0){
        int dig = n % 10;
        cout << dig << " ";
        n /= 10;
    }
}
 
int main()
{
    int num = 35678;
    cout << "count of digits : " << cnt_Digit(num) << endl;
    printDigits(num);
    cout << endl;
    cout << "sum of digits : " << sum_Digit(num) << endl;
    cout << "product of digits : " << prod_Digit(num) << endl;
    return 0;
}