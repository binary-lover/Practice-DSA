#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int count = 1;
        int res = 0;
        for(int i = 1; i < size; i++){
            if(a[res] == a[i]){
                count++;
            }else{
                count--;
            }
            if(count == 0){
                res = i;
                count = 1;
            }
        }
        count = 0;
        for(int i = 0; i < size; i++){
            if(a[res] == a[i]){
                count++;
            }
        }
        if(count <= size/2){
            return -1;
        }
        return a[res];
        
    }
};

int main(){
    Solution obj;
    int a[] = {1, 3, 3, 2,3};
    int size = sizeof(a)/sizeof(a[0]);
    cout << obj.majorityElement(a, size) << endl;


    return 0;
}