#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int op;
        string name;
        
        cin >> op >> name;
        
        switch (op) {
            case 1:
                int mark;
                cin >> mark;
                if (m.find(name) != m.end())
                    m[name] += mark;
                else
                    m[name] = mark;
                break;
            case 2:
                m[name] = 0;    
                break;
            case 3:
                if (m.count(name))
                    cout << m[name] << '\n';
                else
                    cout << "0\n";
                break; 
        }
    }
    
    return 0;
}



