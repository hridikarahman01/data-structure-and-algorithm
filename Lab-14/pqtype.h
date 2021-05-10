//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225lab Section:10
//Date: 04-05-2021

#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "heaptype.h"
#include "heaptype.cpp"
class FullPQ
{};
class EmptyPQ
{};
template<class ItemType>
class PQType
{
public:
PQType(int);
~PQType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
void Enqueue(ItemType);
void Dequeue(ItemType&);
private:
int length;
HeapType<ItemType> items;
int maxItems;
};

#endif // PQTYPE_H_INCLUDED
