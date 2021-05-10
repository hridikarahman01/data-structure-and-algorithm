#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
*/

using namespace std;

int main()
{
    UnsortedType<int>arr;
    arr.InsertItem(5);
    arr.InsertItem(7);
    arr.InsertItem(6);
    arr.InsertItem(9);

    cout << arr.length <<endl ;
    arr.InsertItem(1);
    bool look = false;
    arr.RetrieveItem(4,look);
    return 0;
}
