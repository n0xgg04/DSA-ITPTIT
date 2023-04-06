#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    FASTER;
    int n, x;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> cnt;
    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    sort(arr.begin(), arr.end(), [&](const int &x, const int &y)
         {
        if(cnt[x] != cnt[y]) return cnt[x] > cnt[y];
        return x < y; });

    for (int x : arr)
        cout << x << " ";
}