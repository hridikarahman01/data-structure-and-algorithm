#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

//Name:Mahbuba Rahman Hridi
//Id: 2013373642

template <class mofiz>
class dynArr
{
private:
mofiz *data;
int size;
public:
dynArr(int);
~dynArr();
void setValue(int, mofiz);
mofiz getValue(int);
};

#endif // DYNARR_H_INCLUDED
