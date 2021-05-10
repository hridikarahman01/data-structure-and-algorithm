#include <iostream>
#include "demo.h"
#include "demoF.cpp"


int main()
{
    cout << "Hello world!" << endl;

    //classname objname;
    DemoClass demoObject;
    DemoClass demoObject1(5);
    demoObject1.addition(3,4);

    /* it is invalid
    demoObject1.multiplication(2,3);
    */

    int num1=2,num2=3;
    demoObject1.multiplication(num1, num2);

    cout<<"the multiplication result is: "<<num1<<endl;

    int multi_result;
    demoObject1.multiply(num1, num2, multi_result);
    cout<<"the multiplication result: "<< multi_result<<endl;

    cout<<"Enter an Integer Number : ";
    int num;
    cin>>num;
    bool a = false;

    demoObject1.divisibleBy2(num,a);

    if(a) cout<< num <<" is Divisible by 2."<<endl;
    else cout<< num <<" is not Divisible"<<endl;


    cout<<"Enter an two Integer Number : ";
    a = false;
    cin>>num1>>num2;
    bool b = demoObject1.remainder(num1, num2, a);
    if(b) cout<<num1 <<" % " << num2 << " have remainder"<<endl;
    else cout<<num1 <<" % " << num2 <<" doesn't have any remainder"<<endl;

    return 0;
}
