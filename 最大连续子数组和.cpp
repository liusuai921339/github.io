#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 最大连续子数组和
int maxSubArray(vector<int>& nums)
{
    int pr = 0, re = nums[0];
    for (int x : nums)
    {
        pr = max(pr + x, x);
        re = max(re, pr);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        nums.push_back(b);
    }

    cout << maxSubArray(nums) << endl;

    return 0;
}