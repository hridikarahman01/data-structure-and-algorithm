#include<iostream>
#include"math.h"

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 18-04-2021
*/

using namespace std;

double sumRecursive(int n)
{
    if(n == 0)
    {
        return 1.0;
    }
    return (1.0 / (double) (pow(2, n))) + sumRecursive(n - 1);
}

double sumNonRecursive(int n)
{
    double S = 1.00;
    while(n!=0)
    {
        S = S + (1.0 / (double) (pow(2, n)));
        n--;
    }
    return S;
}

int main()
{
    cout << "Sum of the Series with recursion: " << sumRecursive(15) << endl;
    cout << "Sum of the Series without recursion: " << sumNonRecursive(15) << endl;
}
