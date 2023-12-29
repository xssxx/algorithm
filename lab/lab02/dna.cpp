#include <iostream>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int longest = 1, curr = 1;

    for (int i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i-1])
            curr++;
        else
            curr = 1;
            
        longest = max(longest, curr);
    }

    cout << longest;

    return 0;
}