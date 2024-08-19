#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxLen(string s) {
        stack<char> stak;
        int maximum = 0;
        int temp = 0;
        for(int i = 0; i < s.size(); i++){
            if(!stak.empty() && s[i]==')' && stak.top() == '('){
                stak.pop();
                temp+=2;
                // maximum+=2;
                cout<<temp<<" i: "<<i<<endl;
        
            } 
            else if(!stak.empty() && s[i]==')' && stak.top() == ')'){
                stak.push(s[i]);
                maximum = max(maximum,temp);
                temp = 0;
            }
            else if(s[i] == ')'){
                // Handle the case when stack is empty
                temp = 0;
            }
            else{
                stak.push(s[i]);
                maximum = max(maximum,temp);
            }
        }
        // cout<<"Size: "<<stak.size()<<endl;
        maximum = max(maximum,temp);
        return maximum;
    }
};
int main(){
    Solution obj;
    string s = "(((()";
    cout<<obj.findMaxLen(s)<<endl;
    return 0;
}