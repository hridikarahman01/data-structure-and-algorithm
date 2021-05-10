#ifndef TESTTEMPLATE_H
#define TESTTEMPLATE_H

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 26-02-2021
*/

class Calculator
{
    private:
    int num1;
    int num2;
    //int sub_result;

public:
    int sum(int,int);
    int product(int, int);
    void addition(int,int);
    void subtraction(int&,int,int);
    //you can take input from source file
    //print the result in main
    void divide(int&);

};

#endif // TESTTEMPLATE_H
