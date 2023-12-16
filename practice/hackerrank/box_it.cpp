#include<bits/stdc++.h>

using namespace std;

// Implement the class Box  
class Box {
private:
    int l, b, h;

public:
    Box() : l(0), b(0), h(0) {}
    Box(int l, int b, int h) : l(l), b(b), h(h) {}
    Box(Box& box) {
        this->l = box.l;
        this->b = box.b;
        this->h = box.h;
    }
    
    int getLength() {
        return l;
    }
    
    int getBreadth() {
        return b;
    }
    
    int getHeight() {
        return h;
    }

    // Return the volume of the box
    long long CalculateVolume() {
        return (long long) l * b * h;
    }
        
    // Overload operator < as specified
    bool operator<(Box& B) {
        if (l != B.l) return l < B.l;
        if (b != B.b) return b < B.b;
        return h < B.h;
    }

    // Overload operator << as specified
    friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}