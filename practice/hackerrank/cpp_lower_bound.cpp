#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector<long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        long y;
        cin >> y;
        
        vector<long>::iterator low;
        low = lower_bound(x.begin(), x.end(), y);
        
        
        if (low != x.end() && *low == y)
            cout << "Yes " << low - x.begin() + 1 << '\n';
        else {
            cout << "No ";
            if (low != x.begin())
                cout << low - x.begin() + 1;
            else
                cout << "1";
            cout << '\n';
        }
    }
        
    return 0;
}
