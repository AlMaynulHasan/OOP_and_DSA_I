#include<iostream>
using namespace std;

class complex;

class calculator
{
public:
    void sumReal(complex o1,complex o2);
    void sumimg(complex o1,complex o2);
    void dot(complex o1,complex o2);
    void sumofcomplex(complex o1,complex o2);
};
class complex
{
    int real;
    int img;
public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend void calculator::sumReal(complex o1,complex o2);
    friend void calculator::sumimg(complex o1,complex o2);
    friend void calculator::dot(complex o1,complex o2);
    friend void calculator::sumofcomplex(complex o1,complex o2);

};

void calculator::sumReal(complex o1,complex o2)
{
    cout<<o1.real+o2.real<<endl;
}
void calculator::sumimg(complex o1,complex o2)
{
    cout<<o1.img+o2.img<<endl;
}

int main()
{
    complex o1(10,20),o2(20,10);
    o1.show();
    o2.show();
    calculator sum;

    return 0;
}


