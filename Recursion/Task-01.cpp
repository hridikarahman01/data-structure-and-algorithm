#include<iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 18-04-2021
*/

using namespace std;

int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int fibNonRecursive(int n)
{
    int F = 0, S = 1, T;

    if(n==0)
    {
        return F;
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            T = F + S;
            F = S;
            S = T;
        }
        return  S;
    }
}
int main()
{
    cout << "Fibonacci Number (Recursive Function): " <<fib(15) << endl;
    cout<<"Fibonacci Number (Non Recursive Function): " << fibNonRecursive(15) << endl;
}
