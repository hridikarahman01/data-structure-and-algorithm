#include <iostream>
#include "testtemplate.h"
#include "testtemplate.cpp"

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 26-02-2021
*/

using namespace std;

int main()
{
   Calculator calc;

    int summation=calc.sum(2,4);
    cout << "the summation is: " << summation<< endl;

    //printing subtracted value
    int n1=2, n2=4;
    int sub_result=0;

    calc.subtraction(sub_result,n1,n2);
    cout<< n1 << " " <<n2 <<endl;

    cout<<"the subracted result is: "<< sub_result<<endl;
    return 0;
}
