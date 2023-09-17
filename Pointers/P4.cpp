//Passing Pointer to a function call 

#include<bits/stdc++.h>
using namespace std;
//Dangling Pointer
int fun(){
    int a = 20;
    // return &a;
}   
//Pointer to a function call
int fun2(int a){
    a++;
}
int main() {
    
    // Dangling Pointer 
    // int a =1; 
    // int *ptr=fun();
    // cout<<*ptr; 

    //Passing pointer to a function call
    int a =3;  //Both a are different
    fun2(a);    //a will not be incremented means in short we sending address to the variable 
                //that is pass by reference 
    cout<<a<<endl;
    return 0;
}   