#include "dynarr.h"
#include <iostream>
using namespace std;

//Name:Mahbuba Rahman Hridi
//Id: 2013373642


template <class mofiz>
dynArr<mofiz>::dynArr(int s)
{
data = new mofiz[s];
size = s;
}
template <class mofiz>
dynArr<mofiz>::~dynArr()
{
delete [] data;
}
template <class mofiz>
mofiz dynArr<mofiz>::getValue(int index)
{
return data[index];
}
template <class mofiz>
void dynArr<mofiz>::setValue(int index, mofiz value)
{
data[index] = value;
}
