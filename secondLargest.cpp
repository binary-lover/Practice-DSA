// Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int print2largest(vector<int> &arr) {
        int temp = -1;
        int largest = arr[0];
        for(int i = 1; i<arr.size();i++){
            if(arr[i]>largest){
                temp = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>temp){
                temp = arr[i];
            }
        }
        return temp;
    }
};
int main(){

    vector<int> arr = {9,18,7,6,5,4,3,2,1};
    solution s;
    cout << s.print2largest(arr) << endl;
    
    return 0;
}