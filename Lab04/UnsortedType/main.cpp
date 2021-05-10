#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    UnsortedType<int>obj1;

    obj1.InsertItem(5);
    obj1.InsertItem(7);
    obj1.InsertItem(6);
    obj1.InsertItem(9);

    for(int i=0;i<obj1.LengthIs(); i++)
    {
        int T;
        obj1.GetNextItem(T);
        cout << T << endl;
    }

    cout << obj1.LengthIs() << endl;


}
