//Given an array with N elements, the task is to reverse all the array elements and print the reversed array. 
//Constraints 1<=N<=10^3, 1<=arr[i]<=10^9 , 1<=K<=N
//Input : 8 
    // 7 5 2 11 2 43 1 10 
//Output : 10 1 43 2 11 2 5 7

#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}   

// Time Complexity : O(n)
// Space Complexity : O(n)