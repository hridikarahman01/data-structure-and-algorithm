#include <iostream>

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
Date: 26-02-2021
*/

using namespace std;

int main()
{
    int notes[] = {100,50,20,10,5,2,1},money;
    cout << "Input the amount : ";
    cin >> money;
    cout << "There are:" << endl;
    for(int i=0; i<7; i++)

    {
        cout << money/notes[i];
        cout << " note(s) of ";
        cout << notes[i];
        cout << "\n";
        money=money%notes[i];
    }
}
