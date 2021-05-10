#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab Section: 10
//Date: 13-04-2021

class FullQueue
{};
class EmptyQueue
{};
template<class ItemType>
class QueType
{
public:
QueType();
QueType(int max);
~QueType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
void Enqueue(ItemType);
void Dequeue(ItemType&);
private:
int front;
int rear;
ItemType* items;
int maxQue;
};

#endif // QUETYPE_H_INCLUDED
