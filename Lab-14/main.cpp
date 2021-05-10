//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225lab Section:10
//Date: 04-05-2021

#include <iostream>
using namespace std;
#include "pqtype.cpp"

int main()
{
    PQType<int> pque(15);

    if(pque.IsEmpty()==1)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Queue is not empty!"<<endl;
    }

    pque.Enqueue(4);
    pque.Enqueue(9);
    pque.Enqueue(2);
    pque.Enqueue(7);
    pque.Enqueue(3);
    pque.Enqueue(11);
    pque.Enqueue(17);
    pque.Enqueue(0);
    pque.Enqueue(5);
    pque.Enqueue(1);


    if(pque.IsEmpty()==1)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Queue is not empty!"<<endl;
    }

    int item;
    pque.Dequeue(item);
    cout<<item<<endl;

    pque.Dequeue(item);
    cout<<item<<endl;

    int N,K;
    PQType<int> bag(15);
    cin>>N>>K;
    for(int i=0; i<N; i++)
    {
        int A;
        cin>>A;
        bag.Enqueue(A);
    }

    int maxCandy = 0;

    while(K!=0)
    {

        int X;
        bag.Dequeue(X);
        maxCandy+=X;
        X = X/2;
        bag.Enqueue(X);
        K--;
    }
    cout<<maxCandy;

    return 0;
}
