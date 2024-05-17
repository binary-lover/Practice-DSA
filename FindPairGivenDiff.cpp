#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // sort(arr);
        
        int i=0, j=1,k=0;
        
        while(i<n && j<n){
            
            int gap = arr[j]-arr[i];
            if((gap == x || gap == -x) && i!=j){
                return 1;
            }
            else if (j-i==n-k-1){
                k++;
                i++;
                j=i+1;
            }else{
                j++;
            }
        }
        return -1;
    }
};

int main() {

    int n = 28;
    int x = 0;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,2,3,4,4,3,2,2,3,4,22,10,33,22,33,44,32,34,46};
    Solution obj;
    cout << obj.findPair(n, x, arr);
    return 0;
}