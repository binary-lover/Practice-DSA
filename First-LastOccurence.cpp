#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int binarySearch(int arr[], int n, float k){
        int left = 0;
        int right = n - 1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(k == arr[mid]){
                return mid;
            }
            else if (k > arr[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return left;
    }
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans;
        float a = x - 0.5;
        float b = x + 0.5;
        // cout<<a<<" "<<b<<endl;
        int first = binarySearch(arr, n, a);
        int last = binarySearch(arr, n, b) - 1;
        if(first <= last){
            ans.push_back(first);
            ans.push_back(last);
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};

int main(){
    Solution obj;
    int arr[] = {5, 7, 7, 7, 8, 8, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    vector<int> ans = obj.find(arr, n, x);
    // cout << ans[0] << " " << ans[1] << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}