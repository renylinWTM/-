#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    getchar();
    while (n--)
    {
        map<string, int> tree;
        map<string, int>::iterator iter;
        string str;
        int count = 0; //總共幾棵樹
        while (getline(cin, str))
        {
            if (str.compare("") == 0)
            {
                break;
            }
            tree[str]++; //value++
            count++;
        }
        for (iter = tree.begin(); iter != tree.end(); iter++)
        {
            cout << fixed << setprecision(4);
            cout << iter->first << " " << iter->second * 100.0 / count << endl;
        }
        if (n)
            cout << endl;
    }
    return 0;
}