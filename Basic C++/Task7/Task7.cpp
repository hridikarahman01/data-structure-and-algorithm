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
    int year;

    cout << "Enter a year : ";
    cin >> year;
    if ((year % 400) == 0)
        cout << "This is a leap year." << endl;
    else if ((year % 100) == 0)
        cout << "This is a not leap year" << endl;
    else if ((year % 4) == 0)
        cout << "This is a leap year." << endl;
    else
        cout << "This is not a leap year." <<endl;
    return 0;
}
