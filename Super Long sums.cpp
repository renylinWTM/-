#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    char a, b;
    cin >> n;
    int count = 0;
    while (n--)
    {
        cin >> m;
        if (count == 1)
        {
            cout << endl;
        }
        string str1 = "", str2 = "";
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            str1 = str1 + a;
            str2 = str2 + b;
        }
        str2 = str2 + '0';
        int tmp = 0;
        for (int i = m - 1; i >= 0; i--)
        {
            int n1 = str1[i] - '0';
            int n2 = str2[i] - '0';
            int carry = str2[i + 1] - '0';
            tmp = n1 + n2 + carry;
            str1[i] = '0' + (tmp) % 10;
            str2[i] = '0' + (tmp) / 10;
        }
        if (tmp >= 10)
        {
            cout << "1" << str1 << endl;
        }
        else
        {
            cout << str1 << endl;
        }

        count = 1;
    }
}
