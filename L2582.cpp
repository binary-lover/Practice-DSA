#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int passThePillow(int n, int time)
    {
        if (time < n)
        {
            return time + 1;
        }
        if (time == n)
        {
            return n - 1;
        }

        float direction = (time) * 1.00 / (n - 1);
        int timeMode = time % (n - 1);
        int timeDivn = time / (n - 1);
        // cout<<direction<<" "<<timeMode<<" "<<timeDivn<<endl;
        // cout << fmod(direction,2) << endl;
        if (fmod(direction,2) == 1)
        {
            return n;
        }
        else if (fmod(direction,2) == 0)
        {
            return 1;
        }
        else if (timeDivn % 2 == 1)
        {
            return n - timeMode;
        }
        else if (timeDivn % 2 == 0)
        {
            return timeMode + 1;
        }
        return 0;
    }
};

int main()
{
    Solution s;

    cout << s.passThePillow(6, 20) << endl;
    return 0;
}