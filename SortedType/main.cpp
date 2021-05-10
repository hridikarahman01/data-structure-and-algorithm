#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642

using namespace std;

int main()
{
    SortedType <int> list;

    cout<<"Length: "<<list.LengthIs()<<"\n";

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);

    cout<<"\n\nPrint the list \n\n";
    for(int i=0; i<list.LengthIs();i++){
        int t;
        list.GetNextItem(t);
        cout<<t<<" ";
    }

    cout<<"\n\n";
    bool found = false;

    int item1 = 6;
    list.RetrieveItem(item1, found);
    if(found == true){
        cout<<"Item is found\n";
    }
    else
        cout<<"Item is not found\n";

    cout<<"\n\n";
    bool found1 = false;

    int item2 = 5;
    list.RetrieveItem(item2, found1);
    if(found1 == true){
        cout<<"Item is found\n";
    }
    else
        cout<<"Item is not found\n";


    if(list.IsFull() == true){
        cout<<"\nList is full\n";
    }
    else
        cout<<"\n\nList is not full\n";

    list.DeleteItem(1);
    list.ResetList();

    for(int i=0; i<list.LengthIs();i++){
        int t;
        list.GetNextItem(t);
        cout<<t<<" ";
    }

    cout<<"\n\n";

    if(list.IsFull() == true){
        cout<<"\n\nList is full\n";
    }
    else
        cout<<"\n\nList is not full\n";

}
