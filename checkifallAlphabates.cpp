#include <iostream>
using namespace std;

#include <iostream>
#include <string> // Add the missing include statement for the string class

class Solution
{
public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string s)
    {
        if (s.length() < 26)
        {
            return false;
        }
        string arr[123] = {};
        string arr2[52] = {};
        for (int i = 0; i <= s.length(); i++)
        {
            if (isalpha(s[i]) && (int(s[i]) >= 65 && int(s[i]) <= 122))
            {
                arr[int(s[i])] = s[i];
                // cout << s[i] << " " << int(s[i]) << " " << arr[int(s[i])] << endl;
            }
        }
        for (int i = 65; i <= 90; i++)
        {
            if (arr[i] == "" && arr[i + 32] == "")
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    Solution obj;
    if (obj.checkPangram(s) == true)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}