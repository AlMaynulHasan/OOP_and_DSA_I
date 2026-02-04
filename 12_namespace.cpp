#include <iostream>
using namespace std;

namespace Student {
    void info() {
        cout << "This is the Student namespace." << endl;
    }
}

namespace Teacher {
    void info() {
        cout << "This is the Teacher namespace." << endl;
    }
}

int main() {
    Student::info(); // Student namespace এর info ফাংশন
    Teacher::info(); // Teacher namespace এর info ফাংশন
    return 0;
}

