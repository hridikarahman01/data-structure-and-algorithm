#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642

using namespace std;

int main()
{
    StackType<int> st;
    if (st.IsEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if (st.IsEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    if(st.IsFull()) {
        cout << "Stack is full" << endl;
    }
    else {
        cout << "Stack is not full" << endl;
    }
    StackType<int> temp;
    while(!st.IsEmpty()) {
        temp.Push(st.Top());
        st.Pop();
    }

    while(!temp.IsEmpty()) {
        int t = temp.Top();
        cout << t << " ";
        temp.Pop();
        st.Push(t);
    }
    st.Push(3);

    cout << "\n";

    StackType<int> temp2;
    while(!st.IsEmpty()) {
        temp2.Push(st.Top());
        st.Pop();
    }

    while(!temp2.IsEmpty()) {
        int t = temp2.Top();
        cout << t << " ";
        temp2.Pop();
        st.Push(t);
    }

    cout << "\n";

    if(st.IsFull()) {
        cout << "Stack is full"<< endl;
    }
    else {
        cout << "Stack is not full" <<endl;
    }

    st.Pop();
    st.Pop();

    int top = st.Top();
    cout << top;

    string exp = "(())";

    StackType<char> c;

    for(int i=0; i< exp.length(); i++) {
        if(exp[i] == '(') {
            c.Push(exp[i]);
            continue;
        }

        if (c.IsEmpty()) {
            return false;
        }

        switch(exp[i]) {
            case ')':
                char x = c.Top();
                c.Pop();
                if (x == '(') {
                    cout << "Balanced" << endl;
                }
                else {
                    cout << "Not balanced" << endl;
                }
        }
    }
};

