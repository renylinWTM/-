#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, line;
    while (cin >> n && n)
    {
        bool ans = true;
        bool flag[n]{0}, value[n]{0}, connect[n][n];
        memset(connect, 0, n * n);
        flag[0] = 1, value[0] = 1;
        cin >> line;
        int a, b;
        while (line--)
        {
            cin >> a >> b;
            connect[a][b] = 1;
            connect[b][a] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (connect[i][j])
                {
                    if (flag[j])
                    {
                        if (value[j] == value[i])
                        {
                            ans = false;
                        }
                    }
                    else
                    {
                        value[j] = !value[i];
                        flag[j] = 1;
                    }
                }
            }
        }
        if (ans)
        {
            cout << "BICOLORABLE.\n";
        }
        else
        {
            cout << "NOT BICOLORABLE.\n";
        }
    }
}