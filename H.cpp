#include <iostream>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'
using namespace std;

string to_roman(int num)
{
    string res = "";
    vector<pair<string, int>> roman{{"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};
    for (auto x : roman)
        while (num >= x.second)
            res += x.first, num -= x.second;
    return res;
}

int main()
{
    FASTER;
    int num, k;
    cin >> k;
    while (k--)
    {
        cin >> num;
        cout << to_roman(num) << endl;
    }
    return 0;
}