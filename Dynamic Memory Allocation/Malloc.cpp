#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int* ptr=(int*) malloc(n*sizeof(int));  // this could be written as int* ptr=new int[n];
    for(int i=0;i<n;i++){
        ptr[i]=i*2;
        cout<<ptr[i]<<" ";
    }
            delete[] ptr;                //In C-style it could be written ad free(ptr)
    return 0;
}