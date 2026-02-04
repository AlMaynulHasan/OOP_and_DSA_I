#include<iostream>
using namespace std;
/*A constructor is a special member function of a class that is automatically called when an object is created.*/
class number
{

    int x,y;

public:
    number(int a,int b)
    {
        x=a;
        y=b;
    }

    show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    number n1(1,2),n2(4,5);

    n1.show();
    n2.show();

    return 0;
}

