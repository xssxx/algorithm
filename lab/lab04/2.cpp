#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n], g[n];

    for (int i = 0; i < n; i++) cin >> g[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int start = -1;
    int fuel = 0, totalFuel = 0;

    for (int i = 0; i < n; i++) 
        totalFuel += g[i] - c[i];

    if (totalFuel < 0) goto end;
    
    for (int i = 0; i < n; i++) {
        fuel = 0;
        bool possible = true;

        for (int j = i; j < n + 1; j++) {
            int idx = j % n;
            fuel += g[idx];
            fuel -= c[idx];

            if (fuel < 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            start = i;
            break;
        }
    }

end:
    cout << start;

    return 0;
}