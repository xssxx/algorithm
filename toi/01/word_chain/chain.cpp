/*
Lang: C++
TASK: CHAIN
AUTHOR: Prariyavit Tachakitmatetumrong
*/

#include <iostream>
#include <vector>
using namespace std;

int N, M;

int diff(string& word1, string& word2, int size) {
    int diff = 0;
    for (int i = 0; i < size; i++)
        if (word1[i] != word2[i])
            diff++;
    
    return diff;
}

string cut(vector<string>& chain) {
    string last;
    for (int i = 0; i < chain.size() - 1; i++)
        if (diff(chain[i], chain[i+1], M) > 2)
            return chain[i];
        else
            last = chain[i+1];

    return last;
}

int main() {
    cin >> M >> N;
    vector<string> chain(N);
    for (int i = 0; i < N; i++)
        cin >> chain[i];
    
    if (N == 1) {
        cout << chain[0];
        return 0;
    }
        
    cout << cut(chain);

    return 0; 
}