#include <bits/stdc++.h>
#define lli long long
using namespace std;
void hanoi(int n,char from,char aux,char to){
    if(n==1){
       cout<<"Move disc 1 from "<<from<<" to "<<to<< endl;
       return;
    }
    else{
       hanoi(n-1,from,to,aux);
       cout<<"Move disc "<<n<<" from "<<from<<" to "<<to<< endl;
       hanoi(n-1,aux,from,to);
    }
}
int main(){

     int n;
     cout<<"Tower of Hanoi:" <<endl;
     cout<<"Enter number of discs : ";
     cin>>n;
     cout <<endl;
     hanoi(n,'A','B','C');

}
