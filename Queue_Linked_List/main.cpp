#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 19-04-2021
*/

using namespace std;

int calCoins(int coins[], int n, int amount)
{
   int table[amount+1];

   table[0] = 0;

   for (int i=1; i<=amount; i++)
       table[i] = INT_MAX;


   for (int i=1; i<=amount; i++)
   {
       for (int j=0; j<n; j++)
       if (coins[j] <= i)
       {
           int sub_res = table[i-coins[j]];
           if (sub_res != INT_MAX && sub_res + 1 < table[i])
               table[i] = sub_res + 1;
       }
   }

   if(table[amount]==INT_MAX)
       return -1;

   return table[amount];
}

int main()
{
   int n, amount;
   cout<<"Enter Input for calculating number of coins: ";
   cin>>n;
   int coins[n];
   for(int i = 0; i < n; ++i)
       cin>>coins[i];
   cin>>amount;

   cout<<"Coins required to make amount of "<<amount<<" is "<<calCoins(coins, n, amount);

   return 0;
}
