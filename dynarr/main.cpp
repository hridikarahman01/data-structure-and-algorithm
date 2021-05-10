#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

//Name:Mahbuba Rahman Hridi
//Id: 2013373642

int main()
{
    dynArr <int> arr(5);
    //ClassDemo <int> obj1;
    cout << "Enter Array:" <<endl;
    for(int i=0; i<5; i++)
    {
        int y;
        cin>> y;
        arr.setValue(i,y);
    }
    cout << "Arrays:" <<endl;
    for(int i =0; i<5; i++ )
        cout<<arr.getValue(i) << " ";
    return 0;
}
