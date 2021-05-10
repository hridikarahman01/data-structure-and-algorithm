#include "demo.h"
#include <iostream>
using namespace std;

template <class mofiz>
ClassDemo<mofiz>::ClassDemo()
{
    cout<<"this is demo"<<endl;
}
template <class mofiz>
void ClassDemo<mofiz>::addition(mofiz a,mofiz b)
{
    mofiz sum=a+b;
    cout<<"the sum is: "<< sum<<endl;
}
