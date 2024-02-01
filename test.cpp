#include <iostream>
using namespace std;
void myFunction(int myNumbers[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << myNumbers[i] << "\n";
  }
}

int main()
{
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // myFunction(myNumbers);
  string s = "Bawds jog, flick quartz, vex nymph";
  string arr[123] = {};
  string arr2[52]={};
  for (int i = 0; i <= s.length(); i++)
  {
    if (isalpha(s[i]) && (int(s[i]) >= 65 && int(s[i]) <= 122))
    {
      arr[int(s[i])] = s[i];
      // cout << s[i] << " " << int(s[i]) << " " << arr[int(s[i])] << endl;
    }
  }

  // for (int i = 65; i < 123; i++)
  // {
  //     cout << arr[i] << " ";
  //   // if (!arr[i].empty())
  //   // {
  //   //   cout << arr[i] << " ";
  //   //   arr2
  //   }
  // cout<<endl<<bool(arr[0]=="");

  for (int i = 65; i <= 90; i++)
  {
    if(arr[i]=="" && arr[i+32] == "" ){
      cout<<"false";
    }
      cout<<endl<<arr[i]<<" "<<arr[i+32];
  }
  

  return 0;
}