#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

class list
{
    struct node{
        int data;
        node* next;
        node(int val): data(val), next(nullptr){}
    };

    public:
        list();
        list(int);
        void insert(int);
        int remove();
        int search(int);
        int size();
        bool empty();
        bool full();
        void print();

    private:
         node* head;
        int length;
        int MAX=100;
};
#endif // UNSORTEDTYPE_H_INCLUDED
