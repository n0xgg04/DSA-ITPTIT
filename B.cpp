#include <iostream>
#include <set>

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    FASTER;
    int n, k, x;
    set<int> arr;
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> x;
        arr.insert(x);
    }
    if (arr.size() == k)
        cout << "Perfect";
    else
        cout << "Bad";
}