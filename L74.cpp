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
     // O(log(m*n)) time complexity
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size()-1;

        while(left<=right){
            int mid = left + (right - left )/2;
            // find the row in which element may exist by comparing the target with the first element of each row
            if(target >= matrix[mid][0] && target <= matrix[mid][matrix[mid].size()-1]){ 
                // if target is in the row, then search the target in the row
                cout<<mid<<endl;
                int left1 = 0;
                int right1 = matrix[mid].size()-1;
                while(left1<=right1){
                    int mid1 = left1 + (right1 - left1)/2;
                    cout<<"mid1: "<<mid1<<endl;
                    if(target == matrix[mid][mid1]){
                        return 1;
                    }
                    else if(target > matrix[mid][mid1]){
                        left1 = mid1 + 1;
                    }
                    else{
                        right1 = mid1 - 1;
                    }
                }
                // if target is not found then check in the next row
                target > matrix[mid][matrix[mid].size()-1] ? left = mid + 1 : right = mid - 1;
                

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

    // another approach with O(m*log(n)) time complexity
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     // cheking each row if the target may exist in the row
    //     for(int i=0; i<matrix.size(); i++){
    //         if(target >= matrix[i][0] && target <= matrix[i][matrix[i].size()-1]){
    //             // if target may exist in the row, then search the target in the row
    //             int left = 0;
    //             int right = matrix[i].size()-1;
    //             while(left<=right){
    //                 int mid = left + (right - left)/2;
    //                 if(target == matrix[i][mid]){
    //                     return 1;
    //                 }
    //                 else if(target > matrix[i][mid]){
    //                     left = mid + 1;
    //                 }
    //                 else{
    //                     right = mid - 1;
    //                 }
    //             }
    //         }
    //     }
    //     return 0;
    // }
};

int main(){
    Solution s;
        vector<vector<int>> matrix = {{10, 20, 30, 40},
                                  {15, 25, 35, 45},
                                  {27, 29, 37, 48},
                                  {32, 33, 39, 50}};
    int target = 37;
    cout << s.searchMatrix(matrix, target) << endl;
    
    return 0;
}