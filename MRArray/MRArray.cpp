#include "MRArray.h"
#include <iostream>

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

using namespace std;

MrArray::MrArray(int s)
{
    missArray=new int [s];
    kotolomba=s;

}
int MrArray::getvalue(int index)
{
    return missArray[index];
}
void MrArray::setvalue(int index,int value)
{
   missArray[index]=value;
}
int MrArray::summation()
{

}
int MrArray::percentAverage()
{

}
