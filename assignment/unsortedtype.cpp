#include "unsortedtype.h"
#include <iostream>
using namespace std;

list::list()
{
    head=nullptr;
    length=0;
}
list::list(int val)
{
    head=new node(val);
    length=1;
}
void list::insert(int val)
{
    node* ptr=head;
    if(length>MAX)
    {
        cout<<"Maximum size of list reached!\n";
        return;
    }
    if(!head)
    {
        head=new node(val);
        length=1;
        return;
    }
    while(ptr->next)
        ptr=ptr->next;
    node* temp=new node(val);
    ptr->next=temp;
    length++;
}
int list::remove()
{
    try
    {
        node* ptr=head;
        if(!ptr)
            throw ptr;
        if(!(ptr->next))
        {
            node* last=ptr;
            int val=last->data;
            delete last;
            head=nullptr;
            length--;
            return val;
        }
        else
        {
            while(ptr->next->next)
                ptr=ptr->next;
            node* last=ptr->next;
            ptr->next=nullptr;
            int val=last->data;
            delete last;
            length--;
            return val;
        }

    }
    catch(...)
    {
        cout<<"Exception caught: List is empty!\n";
    }
}
int list::search(int val)
{
    int count=0;
    node* ptr=head;
    while(ptr)
    {
        if(ptr->data==val)
            return count;
        ptr=ptr->next;
        count++;
    }
    return -1;
}
bool list::empty()
{
    return length==0?true:false;
}
bool list::full()
{
    return length==MAX?true:false;
}
int list::size()
{
    return length;
}
void list::print()
{
    node* ptr=head;
    if(!ptr)
    {
        cout<<"List is empty!\n";
        return;
    }
    while(ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<"null "<<endl;
}
