#include <iostream>
using namespace std;


long fibo(long a){
    if((a==0) || (a==1)){
        return a;
    }
    else{
    return fibo(a-1)+fibo(a-2);
    }
}

// Merge Sort


int main()
{
    string a;
    string stringForReverse = "lucky ansari";
    // string reversed = reverseString(stringForReverse);
    // cout << stringForReverse.substr(1, 2);
    // cout<< palindrome("nitin"); 
    // cout<< decToBin(9,"");
    // cout<<sumAllNum(5);
    // cout<<fibo(10);
   cout<<int('a')<<endl<<int('z')<<endl<<int('A')<<endl<<int('Z');
   string arr[122]={};
   arr[int('z')]='z';
   cout<<endl<<arr[122];

    
    return 0;
}
