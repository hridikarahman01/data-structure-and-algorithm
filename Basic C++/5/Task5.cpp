#include <iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
course: CSE225 Section: 10
Date: 26-02-2021
*/

using namespace std;

int main()
{
    int n, a, t;

    cout << "Input the amount: "<<endl;
    cin>> n;

    cout<< "There are: "<<endl;

    a=n/100;
    t=n%100;
    cout<<a<< " note(s) of 100.00"<<endl;

    a=t/50;
    t=t%50;
    cout<<a<< " note(s) of 50.00"<<endl;

    a=t/20;
    t=t%20;
    cout<<a<< " note(s) of 20.00"<<endl;

    a=t/10;
    t=t%10;
    cout<<a<< " note(s) of 10.00"<<endl;

    a=t/5;
    t=t%5;
    cout<<a<< " note(s) of 5.00"<<endl;

    a=t/2;
    t=t%2;
    cout<<a<< " note(s) of 2.00"<<endl;

    a=t/1;
    t=t%1;
    cout<<a<< " note(s) of 1.00"<<endl;


    return 0;

}
