#include <bits/stdc++.h>
using namespace std;

    // efficienct time as it will take O(1) to solve
    class Solution {
    public:
        int numWaterBottles(int numBottles, int numExchange) {
            
        }

    // Least efficient Code as it tacke time O(n) to solve 
    // int numWaterBottles(int numBottles, int numExchange) {
    //     int count = numBottles;
    //     while(numBottles>=numExchange){
    //         count+=numBottles/numExchange;
    //         numBottles = (numBottles%numExchange) + numBottles/numExchange;
    //     }
    //     return count;
    // }
};


int main(){
    Solution s;
    int numBottles = 9;
    int numExchange = 3;
    cout<<s.numWaterBottles(numBottles, numExchange);
    return 0;
}   