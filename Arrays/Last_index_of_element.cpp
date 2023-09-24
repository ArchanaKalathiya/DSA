//Given an array with N elements with possibly duplicate elements. FInd the index of the last occurence of the element x in array, if it is not present return -1 

//Constraints : 1<=N<=10^3, 1<=arr[i]<=10^9, 1<=x<N

#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=n-1;i>=0;i--){
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
    int result=search(arr,n,x);
    cout<<result;
    return 0;
}

//Time complexity : O(n) because it performs a linear search through the array.
//Space Complexity : O(1) because it uses a constant amount of extra space, regardless of the size of the input array.