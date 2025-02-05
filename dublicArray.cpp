#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    std::vector<int> duplicates(long long arr[], int n)
    {
        std::vector<int> result;

        for (int i = 0; i < n; ++i)
        { // {2, 3, 9, 9, 2, 3}
            int index = arr[i] % n;
            arr[index] += n;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i]/n << " ";
            if (arr[i] / n > 1)
            {
                result.push_back(i);
            }
        }

        if (result.empty())
        {
            result.push_back(-1);
        }

        return result;
    }
};
int main()
{
    long long arr[] = {7,6,8,4,9,8,4,7,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;
    vector<int> ans = obj.duplicates(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << endl
             << ans[i] << " ";
    }
    return 0;
}