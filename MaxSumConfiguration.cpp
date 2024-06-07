/*
Given an integer array(0-based indexing) a of size n. Your task is to return the maximum value of the sum of i*a[i] for all 0<= i <=n-1, where a[i] is the element at index i in the array. The only operation allowed is to rotate(clockwise or counterclockwise) the array any number of times.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long max_sum(long long int a[], int n)
    {
        // long long curSum = 0;
        // long long sum = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     sum += (long)a[i];
        //     curSum += (long)a[i]*i;
        // }
        // long long max = curSum;
        // for (int j = 0; j < n - 1; j++)
        // {
        //     long long nextSum = curSum + sum - n * (long)a[n-j-1];
        //     cout << "curSum: " << curSum << " nextSUm: " << nextSum << endl;
        //     if (nextSum > max)
        //     {
        //         max = nextSum;

        //         cout << " MAX = " << max << endl;
        //     }
        //     curSum = nextSum;
        // }

        // return max;



        // another way of this solution...!
        long curSUm = 0;
        long sum = 0;
        
        for(int i =0;i<n;i++){
            sum += (long)a[i];
            curSUm += (long)a[i]*i;
        }
        long curr = curSUm;
        for(int i =1;i<n;i++){
            curr = curr+(sum-n*(long)a[n-i]);
            
            curSUm = max(curr,curSUm);
        }
        return curSUm;
    }
};

int main()
{
    Solution ob;
    long long int A[] = {2,3,4,2,4,5,6};
    int n = 7;
    cout << ob.max_sum(A, n) << endl;
    return 0;
}