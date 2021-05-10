#ifndef LAB-02TASK-03_H_INCLUDED
#define LAB-02TASK-03_H_INCLUDED

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225Lab
//Section: 10

class dynArr
{
private:
    int **data;
    //int size;
    int row;
    int column;
public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int,int);
    int getValue(int,int);
};

#endif // LAB-02TASK-03_H_INCLUDED
