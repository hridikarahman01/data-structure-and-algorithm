#include <iostream>
#include "Complex.h"
#include "Complex.cpp"
using namespace std;

int main()
{
    ComplexNumber ob1(5,4);
    ob1.print();
    ComplexNumber ob2(3,2);
    ob2.print();
    ComplexNumber res(0,0);
    res.print();
    res= ob1+ob2;
    res.print();
    return 0;
}
