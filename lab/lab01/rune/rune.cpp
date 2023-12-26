#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> runes(n);

    for (int i = 0; i < n; i++)
        cin >> runes[i];

    sort(runes.begin(), runes.end());

    int minSum = 0;
    for (int i = 0; i < k; i++)
        minSum += runes[i];
    
    int maxSum = 0;
    for (int i = n - 1; i >= n - k; i--)
        maxSum += runes[i];
    
    cout << maxSum - minSum;

    return 0;
}
