#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (cin >> str && str != ".")
    {
        int matched = 0;
        for (int i = 1; i <= str.length(); i++)
        {
            if (str.length() % i != 0)
                continue;
            matched = 1;
            for (int j = i; j < str.length() && matched; j += i)
            {
                for (int k = 0; k < i && matched; k++)
                {
                    if (str[k] != str[j + k])
                    {
                        matched = 0;
                    }
                }
            }
            if (matched)
            {
                cout << str.length() / i << endl;
                break;
            }
        }
    }
}