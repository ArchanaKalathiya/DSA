#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    vector<string> fizzbuzz(int n){
        vector<string>ans;
            for(int num=1;num<=n;num++){
                bool divisibleby3 = (num%3 == 0);
                bool divisibleby5 = (num%5 == 0);

                string AnsStr = "";

                if(divisibleby3){
                    AnsStr += "Fizz";
                }
                if(divisibleby5){
                    AnsStr += "Buzz";
                }
                if(AnsStr.empty()){
                    AnsStr += to_string(num);
                }
                ans.push_back(AnsStr);
            }
            return ans;
    }
};
int main() {
    Solution s;
    int n;
    cout<<"Enter a number ";
    cin>>n;
    vector<string> result = s.fizzbuzz(n);
    cout << "[" << result[0];
    for (int i = 1; i < result.size(); i++) {
        cout << ", " << result[i];
    }
    cout << "]" << endl;
    return 0;
}   