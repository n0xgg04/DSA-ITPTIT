#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n, limit;
        cin >> n >> limit;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int left = 0, right = 0;
        int minNum = nums[0], maxNum = nums[0];
        int maxLength = 1;

        while (right < n - 1)
        {
            right++;
            minNum = min(minNum, nums[right]);
            maxNum = max(maxNum, nums[right]);
            while (maxNum - minNum > limit)
            {
                minNum = *min_element(nums.begin() + left + 1, nums.begin() + right + 1);
                maxNum = *max_element(nums.begin() + left + 1, nums.begin() + right + 1);
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }

        cout << maxLength << endl;
    }

    return 0;
}