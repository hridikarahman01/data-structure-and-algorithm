#include <iostream>

using namespace std;

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 26-02-2021
*/

int main()
{
	int aa, bb, s;
	cout << "Enter 1st integer aa is: ";
	cin >> aa;
	cout << "Enter 2nd integer bb is: ";
	cin >> bb;
	s=bb;
	bb=aa;
	aa= s;
    cout << " After swapping aa is : "<< aa << endl ;
    cout << " After swapping bb is : "<< bb << endl;
}
