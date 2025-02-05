/*
You have n books, each with arr[i] a number of pages. m students need to be allocated contiguous books, with each student getting at least one book.
Out of all the permutations, the goal is to find the permutation where the sum of the maximum number of pages in a book allotted to a student should be the minimum, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isValid(int arr[], int n, int m, long long mid){
        int students = 1;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum > mid){
                students++;
                sum = arr[i];
            }
            if(students > m){
                return false;
            }
        }
        return true;
    }
    
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(n < m){
            return -1;
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        long long start = 0;
        long long end = sum;
        long long result = LLONG_MAX;
        while(start <= end){
            long long mid = start + (end - start) / 2;
            cout << "mid: " << mid << endl;
            if(isValid(arr, n, m, mid)){ // if mid is a valid answer
                result = min(result, mid);
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return result;
    }

    // approach:
    // 1. find the sum of all the pages
    // 2. find the start and end of the binary search
    // 3. find the mid of the start and end
    // 4. check if the mid is a valid answer (valid answer means that the number of students required to read the books is less than or equal to the number of students available)
    // 5. if the mid is a valid answer, then update the result with the minimum of the result and mid, and update the end to mid - 1
    // 6. if the mid is not a valid answer, then update the start to mid + 1
    // 7. return the result

};

int main(){

    int n = 11;
    int arr[] = {13, 31, 37, 45, 46, 54, 55, 63, 73, 84, 85};
    int m = 9;

    Solution ob;
    cout << ob.findPages(n, arr, m) << endl;

    return 0;
}