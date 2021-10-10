#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> mp;
    map<string, int>::iterator iter;
    string first_s;
    char others[76];
    while (n--)
    {
        cin >> first_s;
        mp[first_s]++;
        cin.getline(others, 76);
    }
    for (auto iter : mp)
    {
        cout << iter.first << " " << iter.second << endl;
    }
}