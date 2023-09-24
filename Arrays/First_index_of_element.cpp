//Given an array with possibly duplicate elements as the input. The task is to find the index of the first occurence of the element x in aaray, if it is not present return -1
//Constraints : 1<=N<=10^3, 1<=arr[i]<=10^9, 1<=x<N

#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        return i;
        }
    }
    return -1;
}           
int main() {
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    int result = search(arr,n,x);
    cout<<result;
    return 0;
}

//Time Complexity : O(n)
//Space Complexity : O(1)