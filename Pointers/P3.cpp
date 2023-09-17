//Pointer to Pointer OR Double Pointer 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<a<<" "<<**q<<" "<<*p<<endl;   //prints the value of a
    cout<<&a<<" "<<p<<" "<<*q<<endl;    //prints the address of a
    cout<<&p<<" "<<q;        //pritns the address of p
    return 0;
}
