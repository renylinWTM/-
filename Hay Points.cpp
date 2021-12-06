#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int m, n, salary, sum;
    string str;
    cin >> m >> n;
    while (m--)
    {
        cin >> str >> salary;
        mp[str] = salary;
    }
    while (n--)
    {
        sum = 0;
        while (cin >> str && str != ".")
        {
            if (mp[str])
            {
                sum = sum + mp[str];
            }
        }
        cout << sum << endl;
    }
}