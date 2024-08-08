#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr3;
        int fst=0;
        int snd=0;
        for(int i=0;i<arr1.size()+arr2.size();i++){
            int min = 0;
            if(arr1[fst]>arr2[snd]){
                min = arr2[snd];
                snd++;
            }else{
                min = arr1[fst];
                fst++;
            }
            arr3.push_back(min);
        }
        for (int i = 0; i < arr3.size(); i++) {
            cout << arr3[i] << " ";
        }
        cout << endl;
        return arr3[k-1];
    }
};

int main(){
    Solution obj;
    int k = 5;
    vector<int> arr1 = {2, 3, 6, 7, 9};
    vector<int> arr2 = {1, 4, 8, 10};

    cout << obj.kthElement(k, arr1, arr2) << endl;

    
    return 0;
}