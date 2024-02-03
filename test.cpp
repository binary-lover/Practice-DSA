#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            if (sum>s )
            {
                // sum-=arr[start];
                // start++;
                while (sum>s && i > start)
                {
                    sum-=arr[start];
                    start++;
                }
                
            }
            if (sum==s)
            {
                return {start+1,i+1};
            }
            
        }
        return {-1};
        
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5,2,0,10,10,10};
    vector<int> result = s.subarraySum(arr, 10, 30);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}