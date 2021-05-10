#ifndef DEMO_H_INCLUDED
#define DEMO_H_INCLUDED

class DemoClass
{
private:
    int num1;
    int num2;

public:
    int sum;
    DemoClass();
    DemoClass(int);
    void addition(int, int);
    int substraction(int, int);

    //we should print the result in main.cpp file
    void multiplication(int&, int&);

    void multiply(int&, int&, int&);

    int division(int&, int&);

    //check if a number is divisible by 2
    //then if divisible then print that the number is divisible
    //by 2 in main function
    void divisibleBy2(int&, bool&);

    //check if there is any remainder
    bool remainder(int, int, bool);


};

#endif // DEMO_H_INCLUDED
