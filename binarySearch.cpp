#include <bits/stdc++.h>

using namespace std;

class Solution
{
    
public:
    int binarySearch(vector<int>& arr,int k){
        int left = 0;
        int right = arr.size() -1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(k==arr[mid]){
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

};



int main(){
    std::vector<int> array = {1,2,3,4,5,6};
    Solution obj;
    int k;
    cout<<"Enter num for binary searching: ";
    cin>>k;
    int result = obj.binarySearch(array,k);
    if(k != -1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else {
        cout<<"not found..!"<<endl;
    }
    
    return 0;
}