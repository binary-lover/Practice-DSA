#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        int timeStart = customers[0][0];
        int waitingPeriod = 0;
        for (int i = 0; i < customers.size(); i++)
        {
            if (timeStart < customers[i][0])
            {
                timeStart = customers[i][0];
            }
            int timeEnd = timeStart + customers[i][1];
            waitingPeriod = (timeEnd - customers[i][0]) + waitingPeriod;
            timeStart = timeEnd;
            cout << timeEnd << " - " << customers[i][0] << " = " << waitingPeriod << endl;
        }
        return (double)waitingPeriod / customers.size();
    }
};

int main()
{
    Solution s;
    vector<vector<int>> customers = {{5, 2}, {5, 4}, {10, 3}, {20, 1}};
    cout << s.averageWaitingTime(customers);

    return 0;
}