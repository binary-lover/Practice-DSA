#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long ExtractNumber(string sentence)
    {
        long long statInt = -1;
        long long sum = -1;
        long long newSum = sum;
        size_t len = 0;
        for (long long i = 0; i < sentence.size(); i++)
        {
            if (int(sentence[i]) >= 48 && int(sentence[i]) <= 57)
            {
                if (!(int(sentence[i - 1]) >= 48 && int(sentence[i - 1]) <= 57))
                {
                    statInt = i;
                }
                if (!(int(sentence[i + 1]) >= 48 && int(sentence[i + 1]) <= 57))
                {
                    len = i - statInt + 1;
                    newSum = stoi(sentence.substr(statInt,len));

                    size_t found = to_string(newSum).find('9');
                    if (found != string::npos){
                        newSum = -1;

                    }
                    
                }
                if (newSum>sum)
                {
                    sum = newSum;
                }
            }
            else
            {
                statInt = -1;
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    cout << s.ExtractNumber("I have 212 apples and 23 pineapples") << endl;
        cout<<endl<<endl;
    cout << s.ExtractNumber("there are 294 people from within 113 are from India and 111 are from USA") << endl;
        cout<<endl<<endl;
    cout << s.ExtractNumber("Another input 9007")<<endl;
        cout<<endl<<endl;

    return 0;
}

/*
0 = 48
9 = 57
*/