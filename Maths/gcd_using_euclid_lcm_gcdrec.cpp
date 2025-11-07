#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a>b){
            a %= b;
        }
        else{
            b %= a;
        }
    }

    if(a == 0) return b;
    return a;
}

int gcdRec(int a, int b){
    if(b==0) return a;

    return gcd(b, a&b);
}

int lcm(int a, int b){
    int hcf = gcdRec(a,b);
    int lcm = (a*b) / hcf;

    return lcm;
}
 
int main()
{
    int a = 20;
    int b = 28;
    cout << gcd(a,b) << endl;
    cout<< gcd(6,12) << endl;
    cout<< lcm(12,15) << endl;
    
    return 0;
}