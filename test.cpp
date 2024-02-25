#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 3, 2, 4, 5, 3, 4, 5, 2, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int jumps = 0, currend = 0, maxrange = 0;
    
    for (int i = 0; i < n; i++)
    {
        // currfar = max();
        for (int j = currend; j <= arr[i + currend]; j++)
        {
            maxrange = max(maxrange, arr[j]);
        }

        if (i == currend)
        {
            jumps++;
            currend = maxrange;
        }

        cout << maxrange << endl;
    }
    cout << endl
         << jumps;
    return 0;
}