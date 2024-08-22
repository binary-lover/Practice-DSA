// 74. Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr,int k){
        int left = 0;
        int right = arr.size() -1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(k==arr[mid]){
                return 1;
            }
            else if (k > arr[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return 0;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size()-1;

        while(left<=right){
            int mid = left + (right - left )/2;
            // find the row in which element may exist by comparing the target with the first element of each row
            if(target >= matrix[mid][0] && target <= matrix[mid][matrix[mid].size()-1]){ 
                // if target is in the row, then search the target in the row
                if(target == matrix[mid][0] || target == matrix[mid][matrix[mid].size()-1]){ // if target is the first or last element of the row, then return 1
                    return 1;
                }
                return binarySearch(matrix[mid], target);
            }
            else if(target > matrix[mid][matrix[mid].size()-1]){ // if target is greater than the last element of the row, then search in the next row
                left = mid + 1;
            }
            else{ // if target is less than the first element of the row, then search in the previous row
                right = mid - 1;

            }
        }
        return 0;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 5;
    cout << s.searchMatrix(matrix, target) << endl;
    
    return 0;
}