#include <bits/stdc++.h>
using namespace std;
int grid[100][100] = {0};
void dfs(int i, int j, int m, int n)
{
    if (i > m || j > n || i < 0 || j < 0)
        return;
    else if (grid[i][j] == 0)
        return;
    else
    {
        grid[i][j] = 0;
        dfs(i - 1, j - 1, m, n);
        dfs(i - 1, j, m, n);
        dfs(i - 1, j + 1, m, n);
        dfs(i, j - 1, m, n);
        dfs(i, j + 1, m, n);
        dfs(i + 1, j - 1, m, n);
        dfs(i + 1, j, m, n);
        dfs(i + 1, j + 1, m, n);
    }
}
int main()
{
    int m, n;
    while (cin >> m >> n && m)
    {
        char a;
        int num = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a;
                if (a == '@')
                {
                    grid[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    num++;
                    dfs(i, j, m, n);
                }
            }
        }
        cout << num << endl;
    }
}
