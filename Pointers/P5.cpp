// Pass by Pointer/Address - swap numbers
#include<bits/stdc++.h>
using namespace std;
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a =3 , b = 4;
    int *x=&a;
    int *y=&b;
    cout<<"Before swapping ";
    cout<<"("<<a<<","<<b<<")"<<endl;
    swap(x,y); //only writing this line the numbers can be swapped 
    cout<<"After swapping ";
    cout<<"("<<a<<","<<b<<")";
    return 0;
}

// In the code provided, `*x` and `*a` have different roles:

// 1. `*x`:
//    - `int *x = &a;` declares a pointer variable `x` and initializes it with the memory address of the integer variable `a`. This means that `x` "points to" or "holds the address of" `a`.
//    - Later in the code, when you use `*x`, it is used to access the value that `x` is pointing to, which is the value stored in the memory location pointed to by `x`. In this case, it's the value of `a`.

// 2. `*a`:
//    - In the `swap` function, you have the line `int temp = *a;`, where `*a` is used to access the value pointed to by the pointer `a`. Since `a` was passed as an argument to the `swap` function, `*a` represents the value of the integer variable `a` that was originally declared in the `main` function.
//    - This line essentially copies the value of `a` into the variable `temp`, so you can temporarily store it while swapping the values of `a` and `b`.

// To summarize, `*x` and `*a` both represent the values of `a` in different contexts. `*x` represents the value of `a` when accessed through the pointer `x`, and `*a` represents the value of the integer variable `a` declared in the `main` function when accessed within the `swap` function.