// Pointers and arrays 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={10,20,30,40};
    cout<<*arr<<endl; //prints 0th element
    int *ptr = arr;
    for(int i=0;i<=3;i++){
        // cout<<*ptr<<endl;
        // ptr++;
        // arr++;  //this is illegal
        //same we can print without using new pointer ptr 
        cout<<*(arr+i)<<" ";
        
    }
    return 0;
}