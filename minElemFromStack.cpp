#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int minEle;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }
        return minEle;
    }

    /*returns poped element from stack*/
    int pop()
    {
        if (s.empty())
        {
            return -1;
        }
        int top = s.top();
        s.pop();
        if (top < minEle)
        {
            int temp = minEle;
            minEle = 2 * minEle - top;
            return temp;
        }
        return top;
    }

    /*push element x into the stack*/
    void push(int x)
    {

        if (s.empty())
        {
            minEle = x;
            s.push(x);
            return;
        }
        if (x < minEle)
        {
            s.push(2 * x - minEle); // pushing 2*x - minEle will help us to retrieve the previous minEle when we pop the current minEle for example if we have 2 as minEle and we push 1 then we will push 2*1 - 2 = 0 and when we pop 1 we will get 2*1 - 0 = 2 which is the previous minEle
            minEle = x;
        }
        else
        {
            s.push(x);
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution ob;
        while (q--)
        {
            int queryType = 0;
            cin >> queryType;
            if (queryType == 1)
            {
                int ele;
                cin >> ele;
                ob.push(ele);
            }
            else if (queryType == 2)
            {
                cout << ob.pop() << " ";
            }
            else if (queryType == 3)
            {
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
    }

    return 0;
}