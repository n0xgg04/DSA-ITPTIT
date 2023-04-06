#include <bits/stdc++.h>
#include <string>

#define um unordered_map
using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    FASTER;
    int n;
    cin >> n;
    string k, temp;
    um<string, vector<string>> save;
    um<string, bool> mark;
    um<string, string> rv;
    vector<string> pp;

    while (n--)
    {
        cin >> k;
        temp = k;
        sort(temp.begin(), temp.end());
        rv[k] = temp;
        if (!mark[temp])
        {
            pp.push_back(k);
            mark[temp] = 1;
        }
        save[temp].push_back(k);
    }

    sort(pp.begin(), pp.end());

    for (auto str : pp)
    {
        for (auto x : save[rv[str]])
            cout << x << " ";
        cout << endl;
    }
}