#include "Lab-02Task-03.h"
#include <iostream>

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

using namespace std;
dynArr::dynArr()
{
    data = NULL;
    row=0;
    column=0;
   // size = 0;
}
dynArr::dynArr(int r,int c)
{
    data = new int*[row];
    row=r;
    column=c;
    //size = s;

    for (int rCounter = 0; rCounter < row; rCounter++)
    {
        data[rCounter] = new int[column];
    }
}
dynArr::~dynArr()
{
    for (int rCounter = 0; rCounter < row; rCounter++)
    {
        delete[] data[rCounter];
    }
    delete [] data;
}
int dynArr::getValue(int ro,int co)
{
    return data[ro][co];
}
void dynArr::setValue(int ro, int co,int value)
{
    data[ro][co] = value;
}
