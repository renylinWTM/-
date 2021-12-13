#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    int m, n, count = 1;
    char tmp;
    while (cin >> m >> n && m)
    {
        if (flag++)
        {
            cout << endl;
        }
        cout << "Field #" << count++ << ":\n";
        int arr[m + 2][n + 2] = {0};
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> tmp;
                if (tmp == '*')
                {
                    arr[i][j] = arr[i][j] - 10;
                    arr[i - 1][j - 1]++;
                    arr[i - 1][j]++;
                    arr[i - 1][j + 1]++;
                    arr[i][j - 1]++;
                    arr[i][j + 1]++;
                    arr[i + 1][j - 1]++;
                    arr[i + 1][j]++;
                    arr[i + 1][j + 1]++;
                }
                else if (tmp == '.')
                    arr[i][j] = arr[i][j];
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][j] >= 0)
                {
                    cout << arr[i][j];
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}
