#include<iostream>
using namespace std;

class number{

public:
    int x,y;
    void set(){

    x=10;
    y=20;

    }

    void show(){

    cout<<x<<" "<<y<<endl;

    }

};

int main(){

    number obj;
    obj.set();
    obj.show();


    return 0;

}
