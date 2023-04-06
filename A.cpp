#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, res = 0;
    map<int, int> cnt;
    cin >> n;
    while (n--)
    {
        cin >> x;
        cnt[x]++;
        res = max(res, cnt[x]);
    }
    cout << res;
}