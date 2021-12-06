#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data;
    cin >> data;
    while (data--)
    {
        int n;
        int arr[10] = {0}; //0~9
        cin >> n;
        if (n == 1)
        {
            cout << "1";
        }
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                arr[2]++;
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                arr[3]++;
                n = n / 3;
            }
            else if (n % 5 == 0)
            {
                arr[5]++;
                n = n / 5;
            }
            else if (n % 7 == 0)
            {
                arr[7]++;
                n = n / 7;
            }
            else
                break;
        }
        if (n != 1)
        {
            cout << "-1" << endl;
            break;
        }
        while (1)
        {
            if (arr[2] >= 3)
            {
                arr[2] = arr[2] - 3;
                arr[8]++;
            }

            else if (arr[3] >= 3)
            {
                arr[3] = arr[3] - 3;
                arr[9]++;
            }
            else if (arr[2] >= 1 && arr[3] >= 1)
            {
                arr[2] = arr[2] - 1;
                arr[3] = arr[3] - 1;
                arr[6]++;
            }
            else if (arr[2] >= 2)
            {
                arr[2] = arr[2] - 2;
                arr[4]++;
            }
            else
                break;
        }
        for (int i = 2; i <= 9; i++)
        {
            while (arr[i])
            {
                cout << i;
                arr[i]--;
            }
        }
        cout << endl;
    }
}