#include<iostream>
#include<math.h>
using namespace std;


// class Solution{
//   public:
//     /*You are required to complete this method */
//     int atoi(string s) {
//         int sum = 0;
//         int isNeg = 1;

//         if (int(s[0]) == 45)
//         {
//             isNeg = -1;
//         }

//         for (int i = 0; i < s.length(); i++)
//         {
//             if (int(s[i]) == 45 && i == 0)
//             {
//                 continue;
//             }
//             int num = s[i]-'0';
//             sum+= num*pow(10,s.length()-i);
//         }
//         return sum*isNeg;
//     }
// };


class Solution{
  public:
    int atoi(string s) {
        int sum = 0;
        int isNeg = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (( (int(s[i]) == 45 && i==0) ||int(s[i]) >= 48 && int(s[i]) <= 57))   
            {
                if (int(s[i]) == 45 && i == 0)
                {
                    isNeg = -1;
                    continue;
                }
                sum = sum*10 + s[i]-'0';
            }
            else{
                return -1;
            }
        }
       return sum*isNeg;
    }
};

int main(){
    string s = "-090";
    Solution ob;
    cout << ob.atoi(s) << endl;
    return 0;
}