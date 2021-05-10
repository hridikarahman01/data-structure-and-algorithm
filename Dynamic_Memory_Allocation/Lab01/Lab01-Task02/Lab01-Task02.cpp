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
    int r,c;
    cout<<"Row number: ";
    cin>>r;
    cout<< "Column number: ";
    cin>>c;

    char **p= new char *[r];
    cout << "Enter the numbers: ";
    cout << "\n";
    for(int i=0; i<r; i++)
    {
        p[i]= new char[c];
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>p[i][j];
        }
    }
    cout << "Printing the values: ";
    cout << "\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {

            cout<< p[i][j] << " ";
        }
        cout<< " " << endl;
    }
    for(int i=0; i<r; i++)
        delete [] p[i];
    delete [] p;
    p = NULL;
    return 0;
}
