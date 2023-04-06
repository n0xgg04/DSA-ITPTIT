#include <iostream>
#include <set>
using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    int n, x, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int> a;
        FOR(i, 1, n)
        {
            cin >> x;
            if (!(x & 1))
                a.insert(x);
        }
        int res = 0;
        for (set<int>::reverse_iterator it = a.rbegin(); it != a.rend(); it++)
        {
            if (*it % 4 == 0)
                a.insert(*it / 2);
            res++;
        }
        cout << res << endl;
    }
}