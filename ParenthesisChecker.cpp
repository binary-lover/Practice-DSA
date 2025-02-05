/*
Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        vector<char> arr;
        for (int j = 0; j < x.size(); j++)
        {
        // cout<<"zise"<<arr.size()<<endl;
            char temp = x[j];
            if (temp == '[' ||temp == '(' ||temp == '{' )
            {
                arr.push_back(temp);
            }
            else if(arr.size()>0){
                int size = arr.size()-1;
                if((temp==']' && arr[size] != '[') || (temp==')' && arr[size] != '(') || (temp=='}' && arr[size] != '{')){
                    return false;
                }
                else{
                    arr.pop_back();
                }
            }
            else{
                return false;
            }
        }
        if(arr.size()==0){
            return true;
        }
        else{
        return false;

        }
    }
};
int main()
{
    Solution s;
    cout<<s.ispar("))");
    return 0;
}