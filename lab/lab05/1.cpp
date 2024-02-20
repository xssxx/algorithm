#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<bool> dp(k + 1, false);
    dp[0] = true;

    for (int i = 1; i <= k; ++i)
        for (int j = 0; j < n; ++j) 
            if (i >= nums[j]) 
                dp[i] = dp[i] || dp[i - nums[j]];

    return dp[k];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << (subsetSum(a, k) ? "Yes" : "No");

    return 0;
}
