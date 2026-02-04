
#include<iostream>
using namespace std;

class BankAcc
{
public:
    int accNumber;
    string accHolderName;


    void set(int accNo, string accHolder)
    {
        accNumber = accNo;
        accHolderName = accHolder;
    }

    void show()
    {
        cout << "Account Number: " << accNumber << ", Account Holder: " << accHolderName << endl;
    }
};

int main()
{
    BankAcc n1, n2;
    n1.set(1, "Asif");
    n1.show();

    n2.set(2, "Hasan");
    n2.show();

    return 0;
}
