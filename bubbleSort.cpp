// bubble sort algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return 0;
}