#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    FASTER;
    int x, n, max_count = 0;
    cin >> n;
    map<int, int> cnt;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
        max_count = max(max_count, cnt[v[i]]);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << max_count << "\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}