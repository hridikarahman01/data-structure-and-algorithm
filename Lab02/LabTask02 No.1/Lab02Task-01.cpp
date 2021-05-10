#include "Lab02Task-01.h"
#include <iostream>

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
