#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab Section: 10
//Date: 13-04-2021

using namespace std;

int main()
{
    QueType<int>que(5);

    if(que.IsEmpty() == true){
        cout<<"Queue is empty" << endl;
    }
    else
        cout<<"Queue is not empty" <<endl;

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);

    if(que.IsEmpty() == true){
        cout<<"Queue is empty" <<endl;
    }
    else
        cout<<"Queue is not empty" <<endl;

    if(que.IsFull() == true){
        cout<<"Queue is full" <<endl;
    }
    else
        cout<<"Queue is not full" <<endl;

    que.Enqueue(6);

    QueType<int>queTemp;

    while(!que.IsEmpty())
    {
        int x;
        que.Dequeue(x);
        cout << x << " ";
        queTemp.Enqueue(x);
    }

    while(!queTemp.IsEmpty()){
        int t;
        queTemp.Dequeue(t);
        que.Enqueue(t);
    }

    if(que.IsFull() == true){
        cout<<"\nQueue is full" << endl;
    }
    else
        cout<<"\nQueue is not full" <<endl;

     try{
        que.Enqueue(8);
    }
    catch(FullQueue &fullque){
        cout<<"Queue overflow"<<endl;
    }
    int x;
    que.Dequeue(x);
    que.Dequeue(x);

    while(!que.IsEmpty())
    {
        int x;
        que.Dequeue(x);
        cout << x << " ";
        queTemp.Enqueue(x);
    }

    while(!queTemp.IsEmpty()){
        int t;
        queTemp.Dequeue(t);
        que.Enqueue(t);
    }

    que.Dequeue(x);
    que.Dequeue(x);
    que.Dequeue(x);

    if(que.IsEmpty() == true){
        cout<<"\nQueue is empty" <<endl;
    }
    else
        cout<<"\nQueue is not empty" <<endl;

    try{
        que.Dequeue(x);
    }
    catch(EmptyQueue &emptyque){
        cout<<"Queue underflow"<<endl;
    }

    cout<<"Enter n: ";
    int n;
    cin>>n;

    QueType<string> q1 = QueType<string>(n+1);

    q1.Enqueue("1");

    int i = 1;
    while(i<=n) {
        string val;
        q1.Dequeue(val);
        i++;
        cout<<val<<endl;
        string val1= val + '0';
        q1.Enqueue(val1);
        string val2 = val + '1';
        q1.Enqueue(val2);
    }


    return 0;
}
