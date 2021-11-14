#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int x[255] = {0}, y[255] = {0};
    int xlen, ylen, anslen;
    while (getline(cin, str))
    {
        xlen = str.length();
        for (int i = 0; i < xlen; i++)
            x[i] = str[xlen - i - 1] - '0';
        getline(cin, str);
        ylen = str.length();
        for (int i = 0; i < ylen; i++)
            y[i] = str[ylen - i - 1] - '0';
        int answer[510] = {0};
        for (int i = 0; i < xlen; i++)
        {
            for (int j = 0; j < ylen; j++)
            {
                answer[i + j] += x[i] * y[j];
                answer[i + j + 1] += answer[i + j] / 10;
                answer[i + j] %= 10;
            }
        }
        anslen = xlen + ylen;
        while (anslen > 1 && !answer[anslen - 1])
        {
            anslen--;
        }
        for (int i = anslen - 1; i >= 0; i--)
        {
            printf("%d", answer[i]);
        }
        cout << endl;
    }
}