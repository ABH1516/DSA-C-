#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyn = n;
    int sumofcubedigits = 0;

    while( n != 0){
        int rem = n % 10;
        sumofcubedigits += rem*rem*rem;
        n /= 10;
    }

    if(sumofcubedigits == copyn){
        return true;
    }else{
        return false;
    }
    
}

int main()
{  
   int n = 372;
   if(isArmstrong(n)){
    cout<<"is  a armstrong number !";
   }else{
    cout<<"not a armstrong number !";
    }
   return 0;
}
