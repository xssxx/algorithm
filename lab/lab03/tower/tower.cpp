#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> t;

void place(int k) {
    auto it = upper_bound(t.begin(), t.end(), k);

    if (it != t.end())
        *it = k;
    else
        t.push_back(k);
}

int main() {
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        place(k);
    }

    cout << t.size();

    return 0;
}
