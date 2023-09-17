#include<iostream>
using namespace std;

int main(){
    int x =10;
    int *y=&x;
    cout<<y<<endl;
    cout<<*y<<endl;     //Prints value of x
    y++;                //incrementing the address of x which is stored in the pointer y
    cout<<y<<endl;      //Print incremented address

    char c='a';
    char *d=&c;
    cout<<*d<<endl;
    d++;
    cout<<d<<endl;
    return 0;
}