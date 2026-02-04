#include<iostream>
using namespace std;
/*A destructor is a special member function that is automatically called when an object is destroyed.*/
class number
{
public:
    int a;
    //constractor
    number()
    {
        cout<<"constractor called"<<endl;
    }
    number(int x)
    {
        a=x;
        cout<<"value:"<<a<<endl;
    }
    //destractor
    ~number()
    {
        cout<<"destractor called"<<endl;
    }
};

int main()
{
    number obj,obj1(10);
    cout<<"first constructor will work then destractor will be work"<<endl;

    return 0;
}

