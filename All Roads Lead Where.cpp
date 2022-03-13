#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin.clear();
        int route, path;
        cin >> route >> path;
        map<char, char> tree;
        for (int i = 0; i < route; i++)
        {
            string place1, place2;
            cin >> place1 >> place2;
            tree[place2[0]] = place1[0];
        }
        for (int i = 0; i < path; i++)
        {
            string start, end;
            cin >> start >> end;
            start = start[0];
            end = end[0];
            while (start[start.length() - 1] != 'R')
            {
                start += tree[start[start.length() - 1]];
            }
            while (end[end.length() - 1] != 'R')
            {
                end += tree[end[end.length() - 1]];
            }
            while (start.length() >= 2 && end.length() >= 2)
            {
                if (start[start.length() - 1] == end[end.length() - 1])
                {
                    if (start[start.length() - 2] == end[end.length() - 2])
                    {
                        start.pop_back();
                        end.pop_back();
                    }
                    else
                    {
                        break;
                    }
                }
            }
            end.pop_back();
            reverse(end.begin(), end.end());
            start += end;
            cout << start << endl;
        }
    }
}