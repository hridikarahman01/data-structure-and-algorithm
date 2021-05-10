//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225lab Section:10
//Date: 04-05-2021

#ifndef HEAPTYPE_H_INCLUDED
#define HEAPTYPE_H_INCLUDED

template<class ItemType>
struct HeapType
{
void ReheapDown(int root, int bottom);
void ReheapUp(int root, int bottom);
ItemType* elements;
int numElements;
};

#endif // HEAPTYPE_H_INCLUDED
