#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex& obj);
    Complex operator-(Complex& obj);
    Complex operator*(Complex& obj);
    Complex operator/(Complex& obj);
    void display();
};

Complex Complex::operator+(Complex& obj)
{
    Complex result;
    result.real = real + obj.real;
    result.imag = imag + obj.imag;
    return result;
}

Complex Complex::operator-(Complex& obj)
{
    Complex result;
    result.real = real - obj.real;
    result.imag = imag - obj.imag;
    return result;
}

Complex Complex::operator*(Complex& obj)
{
    Complex result;
    result.real = real * obj.real - imag * obj.imag;
    result.imag = real * obj.imag + imag * obj.real;
    return result;
}
Complex Complex::operator/(Complex& obj)
{
    Complex result;
    double denominator = obj.real * obj.real + obj.imag * obj.imag;

    if (denominator == 0)
    {
        cout << "Division by zero error!" << endl;
        return Complex(0, 0);
    }

    result.real = (real * obj.real + imag * obj.imag) / denominator;
    result.imag = (imag * obj.real - real * obj.imag) / denominator;
    return result;
}

void Complex::display()
{
    if (imag >= 0)
        cout << real << " + " << imag << "i" << endl;
    else
        cout << real << " - " << -imag << "i" << endl;
}

int main()
{
    Complex c1(3, 2);
    Complex c2(1, 7);

    Complex c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "Subtraction: ";
    c4.display();

    Complex c5 = c1 * c2;
    cout << "Multiplication: ";
    c5.display();

    Complex c6 = c1 / c2;
    cout << "Division: ";
    c6.display();

    return 0;
}

