#include<iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 18-04-2021
*/

using namespace std;

int sumOfDigits(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return ((x%10) + sumOfDigits(x/10));
    }
}

int sumOfDigitsNonRecursive(int x)
{
    int S = 0;
    do
    {
        S = S + x%10;
        x = x/10;
    }
    while(x!=0);

    return S;
}

int main()
{
    cout << "Sum of digits (Recursive Function): " << sumOfDigits(1555) << endl;
    cout << "Sum of digits (Non Recursive Function): " << sumOfDigitsNonRecursive(1555) << endl;
}


