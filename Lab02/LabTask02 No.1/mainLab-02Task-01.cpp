#include <iostream>
#include "Lab02Task-01.h"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10


using namespace std;

int main()
{
    int num;
    dynArr a();
    dynArr b(5);


    for(int i = 0; i < 5; i++){
        cout<<"Enter elements: "<< i+ 1 << " : ";
        cin>>num;
        b.setValue(i, num);
    }
    cout<<"Elements are : ";
    for(int i = 0; i < 5; i++){

        cout<<b.getValue(i)<<" ";
    }

    return 0;
}
