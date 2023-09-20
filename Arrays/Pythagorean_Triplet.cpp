// We have an array of integers, we need to return true if there is a triplet(a,b,c) that satisfies a^2+b^2=c^2
//eg =[2,1,9,16,0,25]
#include<bits/stdc++.h>
using namespace std;

bool Pythagorean_Triplet(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int tempa=arr[i];
        for(int j=i+1;j<n;j++){
            int tempb=arr[j];
            for(int k=j+1;k<n;k++){
                int tempc = arr[k];

                if(tempa*tempa+tempb*tempb==tempc*tempc){
                    return true;
                }
                }
            }
        }
    return false; 
}
int main() {
    vector<int> arr={2,1,9,16,0,25};
    Pythagorean_Triplet(arr)?cout<<"There is Pythagorean Triplet in the array":cout<<"There is NO Pythagorean triplet in the array" ;
    return 0;
}


//It is a naive approach which gives the time complexity O(n^3)
//Auxillary space : O(1)