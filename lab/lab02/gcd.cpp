#include <iostream>
using namespace std;

typedef unsigned long ul; 

ul gcd(ul a, ul b) {
    while (b != 0) {
        ul temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ul sumDigit(ul a) {
    string b = to_string(a);
    ul total = 0;
    for (char n : b)
        total += n - '0';

    return total;
}

int main() {
    ul a, b;
    cin >> a >> b;

    for (ul i = a; i <= b; i++)
        if (gcd(i, sumDigit(i)) != 1)
            cout << i << " ";

    return 0;
}
