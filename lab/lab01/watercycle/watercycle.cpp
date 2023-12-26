#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    
    sort(p.begin(), p.end());

    int boats = 0;
    int left = 0, right = n - 1;

    while (left <= right) {
        if (p[left] + p[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        boats++;
    }

    cout << boats;

    return 0;
}
