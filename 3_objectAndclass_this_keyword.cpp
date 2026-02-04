#include<iostream>
using namespace std;
class Number
{
public:
    int a,b;
    void set ()
    {
        a=7;
        b=34;
        }
    void set (int a,int b)
    {
        this->a=a;       //this->a means it is a global variable
        this->b=b;
    }

    void show()
    {
        cout<<a<<"   "<<b<<endl;
    }
};
int main ()
{
    Number n1,n2;
    n1.set(5,10);
    n2.set(7,20);
    n1.show();
    n2.show();
    return 0;
}



