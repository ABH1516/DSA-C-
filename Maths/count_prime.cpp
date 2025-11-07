#include<iostream>
#include<vector>
using namespace std;

int cnt_Prime(int n){
    vector<bool> isPrime(n+1,true);
    int count = 0;

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;
        }
        for(int j=i*2; j<n; j=j+i){
            isPrime[j] = false;
        }
    }

    return count;
}
int main()
{ 
    int num = 1000;
    cout << cnt_Prime(num);
    return 0;
}