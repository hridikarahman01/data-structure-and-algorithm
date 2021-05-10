#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course: CSE225Lab  Section:10
Date: 19-04-2021
*/

class FullQueue
{};
class EmptyQueue
{};
template <class ItemType>
class QueType
{
struct NodeType
{
ItemType info;
NodeType* next;
};
public:
QueType();
~QueType();
void MakeEmpty();
void Enqueue(ItemType);
void Dequeue(ItemType&);
bool IsEmpty();
bool IsFull();
private:
NodeType *front, *rear;
};

#endif // QUETYPE_H_INCLUDED
