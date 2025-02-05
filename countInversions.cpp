// Given an array of integers. Find the Inversion Count in the array.  Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // efficient
    long long int merge(long long arr[], int l, int m, int r)
    {
        long long int n1 = m - l + 1;
        long long int n2 = r - m;
        long long int left[n1], right[n2];
        for (int i = 0; i < n1; i++)
        {
            left[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
            right[i] = arr[m + 1 + i];
        }
        long long int i = 0, j = 0, k = l, res = 0;
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
            {
                arr[k++] = left[i++];
            }
            else
            {
                arr[k++] = right[j++];
                res += n1 - i;
            }
        }
        while (i < n1)
        {
            arr[k++] = left[i++];
        }
        while (j < n2)
        {
            arr[k++] = right[j++];
        }
        return res;
    }

    long long int mergeSort(long long arr[], int l, int r)
    {
        long long int res = 0;
        if (l < r)
        {
            int m = l + (r - l) / 2;
            res += mergeSort(arr, l, m);
            res += mergeSort(arr, m + 1, r);
            res += merge(arr, l, m, r);
        }
        return res;
    }

    long long int inversionCount(long long arr[], int n)
    {
        return mergeSort(arr, 0, n - 1);
    }
    // less efficient
    // long long int inversionCount(long long arr[], int n)
    // {
    //     long long count = 0;
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[i] > arr[j])
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    
    // }
};

int main()
{
    long long arr[] = {24, 18, 38, 43, 14, 40, 1, 54};
    int n = 8;
    Solution obj;
    cout << obj.inversionCount(arr, n);

    return 0;
}