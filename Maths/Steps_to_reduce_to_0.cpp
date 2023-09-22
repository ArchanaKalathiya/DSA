#include<bits/stdc++.h>
using namespace std;

int numofSteps(int num){
    int steps=0;
    while(num>0){
        if((num & 1)== 0){
            num>>=1;
        }else{
            num--;
        }
        steps++;
    }
    return steps;
}
int main() {
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int steps=numofSteps(n);
    cout<<"Number of Steps to reduce "<<n<<" to 0 are "<<steps;
    return 0;
}