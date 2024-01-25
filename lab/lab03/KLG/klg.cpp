#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k;
ll x[1000];

ll area(ll l, ll r) {
    ll b = (r - l + 1);

    if (b <= 0)
        return 0;
    if (b % 2 == 0)
        return b / 2 * b / 2 + b / 2;

    b = ceil((double)b / 2);

    return b * b;
}

ll calculate(ll T) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += area(x[i] - T, x[i] + T);
        if (i + 1 != n)
            sum -= area(x[i + 1] - T, x[i] + T); // พื้นที่ทับซ้อน
    }

    return sum;
}

ll binarySearch(ll l, ll r) {
    if (l == r) return l;

    ll mid = (l + r) / 2;

    if (calculate(mid) >= k)
        return binarySearch(l, mid);

    return binarySearch(mid + 1, r);
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> x[i];
    
    sort(x, x + n);

    cout << binarySearch(0, 1e9);

    return 0;
}