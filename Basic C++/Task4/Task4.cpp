#include <iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225L Section: 10
Date: 26-02-2021
*/

using namespace std;

int main()
{
  int num1, num2, num3;
  int sum, average;

  cout << "Enter 1st integer number: ";
  cin >> num1;
  cout << "Enter 2nd integer number: ";
  cin >> num2;
  cout << "Enter 3rd integer number: ";
  cin >> num3;

  sum = num1 + num2 + num3;
  average = sum / 3;

  cout << "Average is : " << average << endl;

  return 0;
}
