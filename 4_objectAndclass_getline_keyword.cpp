#include<iostream>
#include<string>
using namespace std;

int main ()
{
    char c;
    cout<<"Character can not take more than one letter"<<endl;

    string str;
    cout<<"\nEnter your name:";
    getline(cin,str);
    cout<<"your name is :"<<str<<endl;
    return 0;

}


