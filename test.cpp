#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Countpair(int arr[], int n, int sum){
        int count = 0;
        int i = 0, j = n-1;
        while(i<j){
            cout<<i<<" "<<j<<endl;
            if(arr[i]+arr[j]==sum){
                // return {i+1,j+1};
                count++;
                i++;
            }
            else if(arr[i]+arr[j]<sum){
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    
    }
};

int main(){
    Solution s;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 7;
    cout<<s.Countpair(arr, n, sum);
    return 0;
}