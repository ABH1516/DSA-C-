#include<iostream>
using namespace std;
int main()
{
   int price[] = {7,1,5,3,6,4};
   int n = sizeof(price)/sizeof(int);
   
   int maxProfit = INT16_MIN;
   int bestbuy = price[0];

   for(int i=1;i<n;i++){
    if(price[i] > bestbuy){
        maxProfit = max(maxProfit, price[i] - bestbuy);
    }

    bestbuy = min(bestbuy,price[i]);
   }

   cout<<maxProfit;
   return 0;
}