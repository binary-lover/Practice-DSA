#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool find3Numbers(int arr[], int n, int x) {
        if(n < 3){
            return false;
        }

        

        sort(arr, arr+n);
        for(int i = 0; i < n-2; i++){
            int l = i+1;
            int r = n-1;
            while(l < r){
                if(arr[i] + arr[l] + arr[r] == x){
                    return true;
                }
                else if(arr[i] + arr[l] + arr[r] < x){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6;
    int x = 13;
    cout << s.find3Numbers(arr, n, x) << endl;

    
    return 0;
}