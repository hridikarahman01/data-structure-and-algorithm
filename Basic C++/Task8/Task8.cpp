#include <iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 26-02-2021
*/

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;
     if(a>b)
        cout << a << " is the maximum" << endl;
        else if (b>c)
            cout << b << " is the maximum" << endl;
        else
            cout << c << " is the maximum" << endl;
    return 0;
}
