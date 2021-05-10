#include <iostream>
/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225Lab
Section: 10
*/

using namespace std;

int main()
{
    int num1, c=0;
    cout << "Enter a number:" << endl;
    cin >> num1;
      for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
        cout << " The number is prime.";
    else
        cout << "The number is not prime." ;

    return 0;
}
