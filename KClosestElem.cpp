#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<int> res;
        int left = 0 ,right = 0;
        int diffLeft, diffRight;
        while (res.size() < k){
            diffLeft = modf arr[left] 
        }
    }
};
int main() {
    Solution ob;
    int n = 11, x = 7, k = 3;

    vector<int> arr = {1,2,3,4,5,6,8,10,11,13,16};
    vector<int> res = ob.printKClosest(arr, n, k, x);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}  // } Driver Code Ends