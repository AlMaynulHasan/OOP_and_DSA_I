#include<iostream>
using namespace std;

class A
{
public:
    int i;
};
class B:virtual public A
{
public:
    int j;
};
class C: virtual public A
{
public:
    int z;
};
class D: public B, public C
{
public:
    int k;
    int product()
    {
        return i*j*k;

    }
};

int main()
{
    D obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    cout<<"From D class Result:"<<obj.product()<<endl;

    return 0;
}

