/*
Search in a Rotated Array

Given a sorted and rotated array arr of n distinct elements which may be rotated at some point, and given an element key, the task is to find the index of the given element key in the array arr. The whole array arr is given as the range to search.

Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.

Note:- 0-based index is followed & return -1 if the key is not present.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(int n, vector<int> &arr, int key)
    {
        int left = 0;
        int right = n - 1;
        int mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            if (arr[left] <= arr[mid])
            {
                if (arr[left] <= key && key < arr[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else
            {
                if (arr[mid] < key && key <= arr[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    int n = 5;
    vector<int> arr = {4, 5, 1, 2, 3};
    int key = 5;
    cout << obj.search(n, arr, key) << endl;

    int n2 = 9;
    vector<int> arr1 = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    key = 9;
    cout << obj.search(n2, arr1, key) << endl;

    return 0;
}