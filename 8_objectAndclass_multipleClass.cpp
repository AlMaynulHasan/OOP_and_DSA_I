#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
};

class Customer
{
public:
    string customerName;
};

class Order
{
public:
    int totalItems;
};

class Payment
{
public:
    float paidTaka;
};

void display(Product p, Customer c, Order o, Payment pay)
{
    cout << "Product: " << p.productName << endl;
    cout << "Customer: " << c.customerName << endl;
    cout << "Total Items: " << o.totalItems << endl;
    cout << "Paid Taka: " << pay.paidTaka << endl;
}

int main()
{
    Product p;
    p.productName = "Laptop";

    Customer c;
    c.customerName = "Asif";

    Order o;
    o.totalItems = 3;

    Payment pay;
    pay.paidTaka = 1500.50;

    display(p, c, o, pay);
    return 0;
}

