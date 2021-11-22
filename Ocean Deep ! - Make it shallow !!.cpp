#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10010], tmp[110];
    int count = 0, len = 0;
    while (cin >> tmp)
    {
        len = strlen(tmp);
        count = 0;
        while (tmp[len - 1] != '#')
        {
            for (int i = 0; i < len; ++i)
            {
                if (tmp[i] == '0' || tmp[i] == '1')
                {
                    a[count++] = tmp[i];
                }
            }
            cin >> tmp;
            len = strlen(tmp);
        }
        for (int i = 0; i < len; ++i)
        {
            if (tmp[i] == '0' || tmp[i] == '1')
            {
                a[count++] = tmp[i];
            }
        }
        a[count] = 0;
        int r = 0;
        for (int i = 0; i < count; ++i)
        {
            r <<= 1;
            r += a[i] - '0';
            r %= 131071;
        }
        if (r)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}