#include <iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 01-03-2021
*/

using namespace std;

int main()
{
    int i,n;
    cout << "Size of array:" << endl;
    cin >> n;
    int *a = new int[n];
    cout << "Enter " << n << " size: " << endl;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Printing the typed values: ";
    cout << "\n";
    for(i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;
    delete [] a;
    a = NULL;
    return 0;
}
