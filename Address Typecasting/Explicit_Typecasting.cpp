#include<bits/stdc++.h>
using namespace std;

int main() {
    int x=65;
    int *p=&x;
    char *pc=(char*)p;
    cout<<*pc;
    return 0;
}