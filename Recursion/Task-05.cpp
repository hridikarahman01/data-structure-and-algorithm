#include<iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 18-04-2021
*/

using namespace std;

int DecToBin(int dec)
{
    if(dec == 0)
    {
        return 0;
    }
    else
    {
        return ((dec%2)+10*DecToBin(dec/2));
    }
}

int DecToBinNonRecursive(int dec)
{
    long bin = 0;
    int t, t0=1;

    do
    {
        t = dec%2;
        dec = dec/2;
        bin = bin + t*t0;
        t0 = t0*10;
    }
    while(dec!=0);

    return bin;
}

int main()
{
    cout << "Decimal Number to Binary Number with recursion: " << DecToBin(15) << endl;
    cout << "Decimal Number to Binary Number without recursion: " << DecToBinNonRecursive(15) << endl;

    return 0;
}

