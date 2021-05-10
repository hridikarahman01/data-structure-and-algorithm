#ifndef LAB02TASK-01_H_INCLUDED
#define LAB02TASK-01_H_INCLUDED

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
    ~dynArr();
    void setValue(int,int);
    int getValue(int);
};


#endif // LAB02TASK-01_H_INCLUDED
