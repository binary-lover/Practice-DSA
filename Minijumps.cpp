#include <iostream>
using namespace std;
class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // your code here
        
        int jumps = 0, currend = 0, maxrange = 0;
        for (int i = 0; i < n - 1   ; i++)
        {
            if(arr[i]==0){
                return -1;
            }
            maxrange = max(maxrange, i + arr[i]);
            if (i == currend)
            {
                jumps++;
                currend = maxrange;
            }
        }
        return jumps;
    }
};

int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;
    cout << obj.minJumps(arr, n);
    return 0;
}