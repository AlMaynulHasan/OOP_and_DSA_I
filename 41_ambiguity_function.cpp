#include <iostream>
using namespace std;

void function(unsigned char c) {
    cout << "Unsigned char: " << c << endl;
}

void function(char c) {
    cout << "Char: " << c << endl;
}

int main() {
    function('c');      // function with char called
    function(88);       // Ambiguity if exact match not found, '88' as int may confuse the compiler
                        // May need explicit cast like function((unsigned char)88);
    return 0;
}

