// Selection Sort Algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    // time complexity of selection sort is O(n^2)
    return 0;
}