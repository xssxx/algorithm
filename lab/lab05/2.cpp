#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
ll maxSumSub(vector<ll>& a) {
    int size = a.size();
    vector<ll> dp(size, 0);
    dp[0] = a[0];
    ll ans = dp[0];

    for (int i = 1; i < size; i++) {
        dp[i] = max(a[i], a[i] + dp[i-1]);
        ans = max(ans, dp[i]);
    }

    return ans;
}
 
int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << maxSumSub(a);

    return 0;
}