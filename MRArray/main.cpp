#include <iostream>

using namespace std;

int main()
{


    MRArray obj;
    obj.allocate(5);

    int counter,num;
    for (counter= 0; counter < 5; counter++) {
          cout << "Enter the number " <<counter+1<<": ";
		cin >> num;
		obj.setValue(counter,num);
	}

	cout<<"Outputs: \n";
	for (counter= 0; counter < 5; counter++) {

		cout<<obj.getValue(counter)<<"\n";
	}
	obj.~dynArr();

    return 0;
}

