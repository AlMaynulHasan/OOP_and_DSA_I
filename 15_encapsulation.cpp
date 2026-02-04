#include <iostream>
using namespace std;

class Student {
private:
    string name;      // Private: not accessible directly from outside
    int rollNumber;

protected:
    float marks;      // Protected: not directly accessible from outside

public:
    // Public method to set private and protected members
    void setData(string n, int roll, float m) {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    // Public method to access and display data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData("Asif", 032, 88.5);
    s1.displayData();

    // s1.name = "Ali";        ❌ Error: 'name' is private
    // s1.marks = 90;          ❌ Error: 'marks' is protected

    return 0;
}
