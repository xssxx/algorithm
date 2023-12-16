#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException : exception {
private:
    int n;
    
public:
    BadLengthException(int n) : n(n) {}
    
    const char* what() {
        stringstream ss;
        ss << n;
        string error = ss.str();
        return error.c_str();
    }
};