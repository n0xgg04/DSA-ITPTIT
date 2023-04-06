#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <sstream>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    FASTER;
    int n, x, H, M, S;
    cin >> n;
    char k;
    string s;
    vector<vector<int>> inp;
    FOR(i, 1, n)
    {
        cin >> H >> k >> M >> k >> S;
        inp.push_back({H, M, S});
    }
    sort(inp.begin(), inp.end(), [&](const vector<int> &x, const vector<int> &y)
         {
      if(x[0]!=y[0]) return x[0] < y[0];
      if(x[1]!=y[1]) return x[1] < y[1];
      return x[2] < y[2]; });
    for (vector<int> x : inp)
    {
        printf("%02d/%02d/%02d\n", x[0], x[1], x[2]);
    }
}