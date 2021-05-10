#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED


class ComplexNumber
{
private:
    int realPart, imaginaryPart;

public:
    //ComplexNumber();
    ComplexNumber(int, int);
    void print();
    ComplexNumber operator+(ComplexNumber);
    //overloading *, !=, <, >
    ComplexNumber operator*(ComplexNumber);
    bool operator<(ComplexNumber);


};

#endif // COMPLEX_H_INCLUDED
