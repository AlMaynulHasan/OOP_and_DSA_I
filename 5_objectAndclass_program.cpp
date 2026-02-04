#include<iostream>
using namespace std;
class student
{
public:

string name;
string id;
char section;
int age;

    void set (string n,string i,char s,int a)
    {
       name=n;
       id=i;
       section=s;
       age=a;
    }
    void show()
    {
        cout<<name<<" "<<id<<" "<<section<<" "<<age<<endl;
    }
};
int main ()
{
    student s1;
    s1.set("Asif","0802420205101032",'A',22);
    s1.show();
    return 0;
}



