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
    int rows;
    cout<<"Enter the row number:"<<endl;
    cin>>rows;
    int **p=new int *[rows];
    int *cols = new int [rows];

    for(int i=0; i<rows; i++)
    {
        cout<<"Enter the number of column for row "<<i<<endl;
        cin>>cols[i];
        p[i]=new int[cols[i]];

        cout<<"Enter the elements of row "<< i <<endl;

        for(int j=0; j<cols[i]; j++)
        {
            cin>>p[i][j];
        }
    }

    cout<<"The elements in the array:"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols[i]; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<rows; ++i)
        delete[] p[i];
    delete []p;
    delete []cols;

    p = NULL;
    cols = NULL;

    return 0;
}
