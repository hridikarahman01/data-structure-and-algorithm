#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

/*
Name: Mahbuba Rahman Hridi
ID: 2013373642
Course:CSE225L Section: 10
*/

const int MAX_ITEMS = 5;
template <class ItemType>
class UnsortedType
{
public :
UnsortedType();
void MakeEmpty();
bool IsFull();
int LengthIs();
void InsertItem(ItemType);
void DeleteItem(ItemType);
void RetrieveItem(ItemType&, bool&);
void ResetList();
void GetNextItem(ItemType&);
private:
int length;
ItemType info[MAX_ITEMS];
int currentPos;
};


#endif // UNSORTEDTYPE_H_INCLUDED
