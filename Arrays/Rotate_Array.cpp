//Given an array 'arr' with 'n' elements, the task is to rotate the array to left by 'k' steps, where 'k' is non-negative.
//Input : 
// 8
// 7 5 2 11 2 43 1 1 
// 2 //The last line contains an integer 'k' representing the number of times the array has to be rotated in the left direction.
//Output : 2 11 2 43 1 1 7 5 

//Constraints : 1<='n'<=10^3 , 1<=arr[i]<=10^9 , 1<='k'<'n'

//Approach 1 : Naive Approach 
// Rotate the arrary 'k' times where in each iteration, we rotate array by 1 
// Rotate array once can be done changeing 'arr[i]' to 'arr[i+1]'  appending the first character to the end.

// Time complexity : O(n*k)
// Space COmplexity : O(1)

//vector<int> rotateArray(vector<int>arr, int k){
//     int n=arr.size();
//     for(int i=0;i<k;i++){
//         int temp=arr[0];
//         for(int j=0;j<n;j++){
//             arr[i]=arr[i+1];
//         }
//         arr[n-1]=temp;
//     }
//     return arr;
// }


// //Approach 2 : 
// Rotating array K times is placing the first k elements at the end and forwared the rest of the elements.
// So first store the fisrt k elements in temporary array then bring the remainin g n-k elements at the front by moving each of them k places ahead 
// Finally append the initial first k elements at the end to get rotated array by k elements
//Time complexity : O(n)
//Space complexity : O(n) -> Now we are creating a new array to store the rotated values

#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> arr,int k){
    int n=arr.size();
    vector<int> rotatedArr(n);
    for(int i=0;i<n;i++){
        rotatedArr[(i-k+n)%n]=arr[i];
    }
    return rotatedArr;
}
int main() {
    int n,k;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    vector<int> rotated=rotateArray(arr,k);
    for(int i=0;i<n;i++){
        cout<<rotated[i]<<" ";
    }
    return 0;
}
