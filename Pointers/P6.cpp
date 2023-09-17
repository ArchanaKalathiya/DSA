//Pass by reference
#include<bits/stdc++.h>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main() {
    int a=2,b=3;
    cout<<"Before Swapping : "<<"("<<a<<","<<b<<")"<<endl;
    swap(a,b);
    cout<<"After Swapping  : "<<"("<<a<<","<<b<<")"<<endl;
    return 0;
}