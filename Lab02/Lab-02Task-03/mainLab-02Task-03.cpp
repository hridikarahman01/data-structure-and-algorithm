#include <iostream>
#include "Lab-02Task-03.h"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

using namespace std;

int main()
{
     int row,column;
    cout << "Enter Row Size:" << "\n";
    cin >>row;

    cout << "Enter column Size:" << "\n";
    cin >>column;

    dynArr obj(row,column);

// assign values to allocated memory
    int val;
    for (int rCounter = 0; rCounter < row; rCounter++)
    {
        for (int cCounter = 0; cCounter < column; cCounter++)
        {
            cout<<"Enter the Value of Position "<<"arr["<<rCounter<<"]"<<"["<<cCounter<<"]"<<": ";

            cin>> val;
            obj.setValue(rCounter,cCounter,val);
        }
    }


    // print the 2D array
    cout << "You entered: \n";
    for (int rCounter = 0; rCounter < row; rCounter++)
    {
        for (int cCounter = 0; cCounter < column; cCounter++)
        {
            cout << obj.getValue(rCounter,cCounter) << " ";
        }

        cout << "\n";
    }

    //deallocate memory.
    obj.~dynArr();

    return 0;
}
