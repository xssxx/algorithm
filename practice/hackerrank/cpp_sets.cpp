#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    
    set<long> s;
    
    for (int i = 0; i < q; i++) {
        int op, val;
        cin >> op >> val;
        if (op == 1)
            s.insert(val);
        else if (op == 2)
            s.erase(val);
        else if (op == 3) {
            set<long>::iterator it;
            it = s.find(val);
            if (it != s.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
            
    }
    
    return 0;
}



