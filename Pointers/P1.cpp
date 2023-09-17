#include<iostream>
using namespace std;

int main(){
    int x =10;
    int *y=&x;
    cout<<y<<endl;
    cout<<*y<<endl;     //Prints value of x
    y++;                //incrementing the address of x which is stored in the pointer y
    cout<<y<<endl;      //Print incremented address
    return 0;
}