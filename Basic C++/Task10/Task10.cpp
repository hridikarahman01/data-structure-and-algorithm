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
    int month_number;
    cout << "Enter Month number: ";
    cin >> month_number;
    switch (month_number) {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 Days." << endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 Days." << endl;
        break;

    case 2:
        cout << "28 Days." << endl;
        break;

    default:
        cout << "Invalid Month." << endl;
        break;
    }
}
