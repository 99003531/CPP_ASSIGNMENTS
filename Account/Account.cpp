
#include "AccountBase.h"

AccountBase::AccountBase()
{
    accNumber = "#0000";
    accName = "Someone";
    balance = 0;
}
AccountBase::AccountBase(std::string AccNo="1111",std::string AccName="alex" ,double bal=0)
{
    accNumber = AccNo;
    accName = AccName;
    balance = bal;
}
AccountBase:: AccountBase(const AccountBase&a1)
{
    accNumber = a1.accNumber;
    accName = a1.accName;
    balance = a1.balance;
}
 AccountBase::int debit(double)
{
    double amount;
    cin>>this->amount;
    balance = balance - amount;
    return balance;
}
 AccountBase::int credit(double)
{
    double amount;
    cin>>this->amount;
    balance+=amount;
    return balance;
}
AccountBase::void display()
{
    cout<<"Balance: "<<balance<<endl;
}
