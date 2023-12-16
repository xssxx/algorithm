#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a[n];
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int val;
            cin >> val;
            a[i].push_back(val);
        }
    }
    
    for (int i = 0; i < q; i++) {
        int q1, q2;
        cin >> q1 >> q2; 
        cout << a[q1][q2] << '\n';
    }
    
    return 0;
}