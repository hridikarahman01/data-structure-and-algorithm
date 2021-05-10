#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225lab Section:10
//Date: 11-04-2021

class FullStack
// Exception class used by Push when stack is full.
{};

class EmptyStack
// Exception class used by Pop and Top when stack is empty.
{};

template <class ItemType>
class StackType
{
  struct NodeType
  {
    ItemType info;
    NodeType* next;
  };
public:
  StackType();
  ~StackType();
  void push(ItemType);
  void pop();
  ItemType top();
  bool IsEmpty();
  bool IsFull();

private:
  NodeType *topPtr;
};

#endif // STACKTYPE_H_INCLUDED
