#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcast;
    cin >> testcast;
    while (testcast--)
    {
        int n;
        cin >> n;
        int arr[n], count = 0, tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    tmp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = tmp;
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}