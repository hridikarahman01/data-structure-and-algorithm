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
    char op;
    int a, b;

    cout << "Enter an arithmetic operator (+, - , * or / ) : " <<endl ;
    cin >> op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    switch(op)
    {
        case '+':
            cout << "Result: ";
            cout << a+b;
            break;

        case '-':
            cout << "Result: ";
            cout << a-b;
            break;

        case '*':
            cout << "Result: ";
            cout << a*b;
            break;

        case '/':
            cout << "Result: ";
            cout << a/b;
            break;

        default:

            cout << "Operator is not correct";
            break;
    }
}
