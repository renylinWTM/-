#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int ascii;
    int count;
};
bool compare(Node a, Node b)
{
    if (a.count == b.count)
        return a.ascii > b.ascii;
    else
        return a.count < b.count;
}
int main()
{
    string str;
    int tmp = 0;
    while (getline(cin, str))
    {
        if (tmp)
        {
            cout << endl;
        }
        Node s[97] = {0};
        for (int i = 0; i < 96; i++) //產生ascii的值
        {
            s[i].ascii = i + 32;
        }
        for (int i = 0; i < str.length(); i++)
        {
            s[str[i] - 32].count++;
        }
        sort(s, s + 97, compare);
        for (int i = 0; i < 97; i++)
        {
            if (s[i].count != 0)
            {
                cout << s[i].ascii << " " << s[i].count << endl;
            }
        }
        tmp = 1;
    }
}
