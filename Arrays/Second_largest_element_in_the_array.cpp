//An arra/list 'ARR'  of integers is given.Find the second largest element present  in the 'ARR'
//Duplicate elements may be present.
//If no such element return -1
//Constraint : 1<=T<=100, 1<=N<=5000, -10^9<=SIZE<=10^9
//T is the total no. of test cases 
//N is the no. of elements in an array
//SIZE is the range of elements in an array.

#include<bits/stdc++.h>
using namespace std;
int secondLargest(int n,vector<int> &arr){
    int max=INT_MIN;
    int temp = INT_MIN;
        for(auto x:arr){
            if(max < x){
                    temp=max;
                max=x;
            }
            else if(x>temp && x!=max){
                temp=x;
            }
        }
        if(temp==INT_MIN){
                return -1;
            }
            return temp;
        
    }
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int result=secondLargest(n,arr);
    cout<<result;
    return 0;
}           

//Time complexity : O(n)
//Space complexity: O(1)