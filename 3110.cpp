#include <bits/stdc++.h>
using namespace std;

int scoreOfString(string s){
    int sum = 0;
    int diff = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(int(s[i]>=97 && s[i]<=122)){
            diff = int(s[i]) - int(s[i+1]);
            if(diff<0){
                diff = -diff;
            }
            sum+=diff;
        }

    }
    return sum;
}

int main(){
    string s = "zaz";
    int score;
    score = scoreOfString(s);
    cout<<score;
    return 0;
}