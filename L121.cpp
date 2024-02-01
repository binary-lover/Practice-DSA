#include <iostream>
#include <climits> // Include the <climits> header for INT_MAX
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxP = 0;

        int minValue=0;
        int lsf = INT_MAX;
        cout<<lsf;
        for (int j = 0; j < prices.size(); j++)
        {
            minValue = prices[j];
            cout<<minValue<<endl;
            for (int i = j; i < prices.size(); i++)
            {
                if (prices[i] > minValue)
                {
                    if (maxP<(prices[i] - minValue))
                    {
                        maxP = prices[i] - minValue;
                        cout <<" "<<maxP<<endl;
                    }
                    
                }
            }
        }
        return maxP;
    }
};

int main()
{
    // Test the maxProfit function
    Solution solution;
    // vector<int> prices = {7, 1, 5, 3, 6, 4};
    vector<int> prices = {7,6,4,3,1};
    int maxProfit = solution.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << endl;

    return 0;
}
