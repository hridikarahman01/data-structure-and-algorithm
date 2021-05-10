#include "complex.h"
#include<iostream>

using namespace std;

/*ComplexNumber::ComplexNumber()
/*{
    realPart=0;
    imaginary=0
}*/
ComplexNumber::ComplexNumber(int real, int imaginary)
{
    realPart=real;
    imaginaryPart=imaginary;
}
void ComplexNumber::print()
{
    cout<<realPart<<" + " << imaginaryPart<<"i"<<endl;
}
ComplexNumber ComplexNumber::operator+(ComplexNumber cn)
{
    ComplexNumber t(0,0);
    t.realPart= realPart+cn.realPart;
    t.imaginaryPart= imaginaryPart+cn.imaginaryPart;
    return t;
}
