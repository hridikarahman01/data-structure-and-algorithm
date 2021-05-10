#include<iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 18-04-2021
*/

using namespace std;

int findMin(int a[], int size)
{
    if (size == 1)
    {
        return a[0];
    }
    else
    {
        return min(a[size-1], findMin(a, size-1));
    }
}

int findMinNonRecursive(int a[], int size)
{
    int R = a[0];
    for (int i = 1; i < size; i++)
        R = min(R, a[i]);
    return R;
}

int main()
{
    int a[] = {2,5,4,3,9,7,6,8};

    cout << "Minimum Element with recursion: " << findMin(a, 8) << endl;
    cout << "Minimum Element without recursion: " << findMinNonRecursive(a,8) << endl;

    return 0;
}



