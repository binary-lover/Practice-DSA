/*
Sum of Middle Elements of two sorted arrays
Given 2 sorted integer arrays Ar1 and Ar2 of size N each. Merge the given arrays and find the sum of the two middle elements of the merged array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMidSum(int ar1[], int ar2[], int n)
    {
        std::vector<int> arr;
        int j = 0;
        int i = 0;
        while (arr.size() != (2 * n))
        {
            if (i < n && j < n)
            {

                if (ar2[j] < ar1[i])
                {
                    arr.push_back(ar2[j]);
                    j++;
                }
                else if (ar2[j] == ar1[i])
                {
                    arr.push_back(ar1[i]);
                    arr.push_back(ar2[j]);
                    j++;
                    i++;
                }
                else
                {
                    arr.push_back(ar1[i]);
                    i++;
                }
            }
            else if(i == n && j < n ){
                arr.push_back(ar2[j]);
                j++;
            }
            else if(j == n && i < n){
                arr.push_back(ar1[i]);
                i++;
            }
        }

        return (arr[n - 1] + arr[n]);
    }
};

int main()
{
    Solution obj;
    int ar1[] = {1, 2, 4, 6, 10};
    int ar2[] = {4, 5, 6, 12, 12};
    int n = sizeof(ar1) / sizeof(ar1[0]);
    cout << obj.findMidSum(ar1, ar2, n);

    return 0;
}