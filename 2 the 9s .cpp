#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, tmp_str;
    while (cin >> str)
    {
        int sum = 0, degree = 0;
        if (str != "0")
        {
            for (int i = 0; i < str.length(); i++)
            {
                sum = sum + (str[i] - '0');
            }
            while (sum != 0 && sum != 9 && sum % 9 == 0)
            {
                degree++;
                tmp_str = to_string(sum);
                sum = 0;
                for (int i = 0; i < tmp_str.length(); i++)
                {
                    sum = sum + (tmp_str[i] - '0');
                }
            }
            if (sum == 9)
            {
                degree++;
            }
            if (degree == 0)
            {
                cout << str << " is not a multiple of 9." << endl;
            }
            else
            {
                cout << str << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
            }
        }
    }
}