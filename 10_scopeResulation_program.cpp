#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    double marks;

public:
    void set(string studentName, int studentRoll, double studentMarks);
    string getName();
    int getRoll() ;
    double getMarks();
    void show();
};

void Student::set(string studentName, int studentRoll, double studentMarks) {
    name = studentName;
    roll = studentRoll;
    marks = studentMarks;
}

int Student::getRoll() {
    return roll;
}

double Student::getMarks() {
    return marks;
}

void Student::show() {
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s1, s2;

    s1.set("MD. ABDUR", 101, 95.5);
    s2.set("sharuk", 102, 89.0);

    cout << "Student 1 Details:" << endl;
    s1.show();

    cout << "\nStudent 2 Details:" << endl;
    s2.show();

    double totalMarks = s1.getMarks() + s2.getMarks();
    cout << "\nTotal Marks of both students: " << totalMarks << endl;

    return 0;
}

