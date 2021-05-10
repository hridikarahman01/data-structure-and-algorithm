#ifndef MRARRAY_H_INCLUDED
#define MRARRAY_H_INCLUDED

class MrArray
{
private:
    int kotolomba;
    int *missArray;
public:
    MrArray(int);
    int summation();
    void setvalue(int, int);
    int getvalue(int);
    int average();
    //this function will find the percentage of
    //elements that are above average
    void percentAverage(int,double&);
};


#endif // MRARRAY_H_INCLUDED
