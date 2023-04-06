#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#define ll long long
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define pb push_back
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;

int main()
{
    FASTER;
    bool mark[10000];
    vector<int> a(10000);
    set<int> b;
    int n, m, x, y;
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> x >> y;
        mark[x] = 1;
        a[x] = y;
        b.insert(x);
    }

    cin >> m;
    FOR(i, 1, m)
    {
        cin >> x >> y;
        if (mark[x])
            a[x] += y;
        else
        {
            a[x] = y;
            mark[x] = 1;
            b.insert(x);
        }
    }
    for (set<int>::iterator it = b.begin(); it != b.end(); it++)
        printf("%d %d\n", *it, a[*it]);
}