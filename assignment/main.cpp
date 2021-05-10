//Name: Mahbuba Rahman Hridi
//ID: 2013373642
#include "unsortedtype.h"
#include "unsortedtype.cpp"

#include<iostream>

using namespace std;

int main()
{
  // Input Set:1
        cout<<"Input Set:1\n\n";
        list l=list();
        l.insert(6);
        l.insert(12);
        l.insert(5);
        l.insert(2);
        l.insert(9);
        l.remove();
        l.remove();
        l.print();

        cout<<"12 is present at index: "<<l.search(12)<<endl;

        // Input Set:2
        cout<<"\nInput Set:2\n\n";
        list l2=list(10);
        l2.insert(2);
        l2.print();
        cout<<"Popped item: "<<l2.remove()<<endl;
        l2.insert(14);
        l2.remove();
        l2.remove();
        l2.remove();
        l2.remove();

        // Input Set:3
        cout<<"\nInput Set:3\n\n";
        list l3=list(12);
        l3.insert(6);
        l3.insert(2);
        l3.insert(8);
        l3.insert(62);
        l3.print();
        cout<<"4 is present at: "<<l3.search(4)<<endl;
        cout<<"Is the list empty?: "<<l3.empty()<<endl;
        return 0;
}
