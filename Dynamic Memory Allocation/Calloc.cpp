//Calloc(Contiguous Allocation) function intializes each block with a default value 0. 
//It has two parameters or arguments as comapre to malloc()
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int* ptr=(int*) calloc(n,sizeof(int));      //int* ptr=new int[n];
    for(int i=0;i<n;i++){
        ptr[i]=i*2;
        cout<<ptr[i]<<" ";
    }
    free(ptr);                                 //delete[] ptr;
    return 0;
}