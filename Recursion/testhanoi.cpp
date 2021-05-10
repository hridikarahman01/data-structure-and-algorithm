#include <iostream>
using namespace std;

void hanoi(int n, char src, char dst, char aux)
{
    if(n == 1)
        cout<<"Move disc from peg "<<src<<" to peg "<<dst<<endl;
    else
    {
        hanoi(n-1, src, aux, dst);
        hanoi(1, src, dst, aux);
        hanoi(n-1, aux, dst, src);
    }
}

int main()
{
    hanoi(5, 'A', 'C', 'B');
    return 0;
}
