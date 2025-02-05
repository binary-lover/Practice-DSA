#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLen(string s)
    {

        int n = s.size();
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (st.empty() || ch == '(' || s[st.top()] == ')')
            {
                st.push(i);
            }
            else
            {
                st.pop();
            }
            if (st.empty())
            {
                ans = max(ans, i + 1);
            }
            else

            {
                ans = max(ans, i - st.top());
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    string s = "(((()";
    cout << obj.findMaxLen(s) << endl;
    return 0;
}