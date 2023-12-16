#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        // 1
        cout << left << hex 
        << showbase << nouppercase 
        << (long) A << endl;
        
        // 2
        cout << right << fixed << setw(15) 
        << showpos << setprecision(2) 
        << setfill('_') << B << endl;
    
        // 3
        cout << setprecision(9)
        << scientific << noshowpos << uppercase  
        << C << endl;

	}

	return 0;
}