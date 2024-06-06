#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        int x = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                x++;
                if(x == k){
                    return i;
                } 
            }
        }
        return -1;
    }

    // Another way to solving this problem
    int kthFactor2(int n, int k) {
        int x = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                x++;
                if(x == k){
                    return i;
                } 
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    cout<<s.kthFactor(12,3);
    cout<<s.kthFactor2(12,3);

    return 0;
}