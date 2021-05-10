#include <iostream>
#include "demo.h"
#include "demo.cpp"


using namespace std;

int main()
{
    //classname <datatype> objectname;
    ClassDemo <int> obj1;
    obj1.addition(3,4);
    int x=10;
    int y=20;
    obj1.addition(x,y);

    return 0;
}
