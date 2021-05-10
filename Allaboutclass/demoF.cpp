#include "demo.h"
#include <iostream>
using namespace std;



//implementing the class

//implementing a constructor
//Classname::constructorname(){}
DemoClass::DemoClass()
{
    cout<<"this is a demo constructor"<<endl;
}
DemoClass::DemoClass(int a)
{
    cout<<"this is a parameterized demo constructor"<<endl;
}

//returntype classname::function name(parameters)
void DemoClass::addition(int number1,int number2)
{
    int sum=number1+number2;
    cout<<"the addition is: "<<sum<<endl;
}

void DemoClass::multiplication(int& numb1,int& numb2)
{
    numb1=numb1*numb2;
    /*
    int mult=numb1*numb2;
    numb1=mult;
    */
}

void DemoClass::multiply(int& numb1,int& numb2, int& multi)
{

    multi=numb1*numb2;


}
void DemoClass::divisibleBy2(int& num, bool& isDivisible)
{
    isDivisible = false;
    if(num % 2 == 0) isDivisible = true;
}
bool DemoClass::remainder(int a, int b, bool hasReminder)
{

    if(a%b==0) hasReminder = false;
    else hasReminder = true;
    return hasReminder;
}
