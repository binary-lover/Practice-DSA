// 150. Evaluate Reverse Polish Notation

// Evaluate the expression. Return an integer that represents the value of the expression.

// Note that:

// The valid operators are '+', '-', '*', and '/'.
// Each operand may be an integer or another expression.
// The division between two integers always truncates toward zero.
// There will not be any division by zero.
// The input represents a valid arithmetic expression in a reverse polish notation.
// The answer and all the intermediate calculations can be represented in a 32-bit integer.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eval(int a, int b, string op){
        if(op == "+"){
            return a+b;
        }
        else if(op == "-"){
            return a-b;
        }
        else if(op == "*"){
            return a*b;
        }
        else if(op == "/"){
            return a/b;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        vector<int> result;
        for (int i = 0; i < tokens.size(); i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                result.push_back(stoi(tokens[i]));
            }
            else{
                string op = tokens[i];
                int b = result[result.size()-1];
                result.pop_back();
                int a = result[result.size()-1];
                result.pop_back();
                int ans = eval(a,b,op);
                result.push_back(ans);
            }
        }
        return result[0];
    }
};
int main(){
    Solution s;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << s.evalRPN(tokens) << endl;

    tokens = {"4", "13", "5", "/", "+" };
    cout << s.evalRPN(tokens) << endl;

    tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << s.evalRPN(tokens) << endl;

    return 0;
}