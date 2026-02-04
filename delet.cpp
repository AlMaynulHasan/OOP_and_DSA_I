#include <iostream>
using namespace std;

class Pen {
private:
    string name;
    int unit;
    float price;

public:
    // Constructors
    Pen() {
        name = "Pen";
        unit = 0;
        price = 0.0;
    }

    Pen(int u, float p) {
        name = "Pen";
        unit = u;
        price = p;
    }

    // Show total price + unit
    void showUnitAndTotalPrice() {
        cout << name << endl;
        cout << "Unit:" << unit << endl;
        cout << "Total price:" << (unit * price) << endl;
    }

    // Show price and unit
    void showPriceAndUnit() {
        cout << name << endl;
        cout << "Price :" << price << endl;
        cout << "Unit:" << unit << endl;
    }

    // Overload == to compare price only
    bool operator==(Pen p) {
        return (price == p.price && unit == p.unit);
    }

    // Show total price and unit (for third object)
    void showOnlyTotalPriceAndUnit() {
        cout << name << endl;
        cout << "Total price:" << (unit * price) << endl;
        cout << "Unit :" << unit << endl;
    }
};

int main() {
    // Create pen objects using constructor
    Pen *p1 = new Pen(5, 8);   // total = 40
    Pen *p2 = new Pen(5, 10);  // total = 50
    Pen *p3 = new Pen(10, 3);  // total = 30

    // Pointer-based calls
    p1->showUnitAndTotalPrice();  // First block
    p2->showPriceAndUnit();       // Second block

    // Comparison
    if (*p1 == *p2)
        cout << "Same" << endl;
    else
        cout << "Different" << endl;

    // Show all pens again in custom formats
    p1->showUnitAndTotalPrice();         // p1 again
    p2->showPriceAndUnit();              // p2 again
    p3->showOnlyTotalPriceAndUnit();     // p3 format

    // Clean up dynamic memory
    delete p1;
    delete p2;
    delete p3;

    return 0;
}
