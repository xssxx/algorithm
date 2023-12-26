#include <bits/stdc++.h>
using namespace std;

#define SIZE 3

void generateSums(int size[], int n) {
    bool possible[n + 1] = {false};
    possible[0] = true;

    for (int i = 0; i < SIZE; ++i)
        for (int j = size[i]; j <= n; ++j)
            if (possible[j - size[i]])
                possible[j] = true;

    bool found = false;
    for (int i = 1; i <= n; ++i) {
        if (possible[i]) {
            cout << i << '\n';
            found = true;
        }
    }

    if (!found)
        cout << "no";
}

int main() {
    int size[SIZE] = {6, 9, 20};
    int n;
    cin >> n;

    generateSums(size, n); 

    return 0;
}