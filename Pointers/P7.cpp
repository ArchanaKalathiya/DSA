//Call by Reference
#include<bits/stdc++.h>
using namespace std;

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a=2,b=3;
    swap(&a,&b);
    cout<<"After swapping : "<<a<<" "<<b;
    return 0;
}