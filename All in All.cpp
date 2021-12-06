#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        int i = 0, j = 0;
        for (; i < s.length() && j < t.length(); j++)
        {
            if (s[i] == t[j])
                i++;
        }
        if (i == s.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
