#ifndef LAB-02TASK-02_H_INCLUDED
#define LAB-02TASK-02_H_INCLUDED

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

class dynArr
{
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    void allocate(int);
    ~dynArr();
    void setValue(int,int);
    int getValue(int);
};



#endif // LAB-02TASK-02_H_INCLUDED
