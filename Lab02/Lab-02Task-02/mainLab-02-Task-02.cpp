#include "Lab-02Task-02.h"
#include <iostream>

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

using namespace std;

int main()
{
    dynArr obj;
    //dynArr obj2(5);
   // allocate array size using function
    obj.allocate(5);

    int counter,num;
    //input
    for (counter= 0; counter < 5; counter++) {
          cout << "Enter the number " <<counter+1<<": ";
		cin >> num;
		obj.setValue(counter,num);
	}

	cout<<"Outputs: \n";
	for (counter= 0; counter < 5; counter++) {

		cout<<obj.getValue(counter)<<"\n";
	}

	//deallocate memory
	obj.~dynArr();

    return 0;
}
