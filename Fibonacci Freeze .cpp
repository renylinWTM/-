#include <bits/stdc++.h>
using namespace std;
int dp[5001][2000] = {0};
int main()
{
    dp[1][0] = 1;
    for (int i = 2; i <= 5000; i++)
    {
        for (int j = 0; j < 2000; j++)
        {
            dp[i][j] += dp[i - 1][j] + dp[i - 2][j];
            dp[i][j + 1] += dp[i][j] / 10;
            dp[i][j] %= 10;
        }
    }
    int n, i;
    while (cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is ";
        for (i = 1999; i >= 0; i--)
        {
            if (dp[n][i])
            {
                break;
            }
        }
        if (i == -1)
        {
            cout << "0";
        }
        else
        {
            for (; i >= 0; i--)
            {
                cout << dp[n][i];
            }
            cout << endl;
        }
    }
}