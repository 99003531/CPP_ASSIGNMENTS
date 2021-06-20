#ifndef ACCOUNTBASE_H
#define ACCOUNTBASE_H
#include <iostream>

using namespace std;

class AccountBase
{
    private:
        std::string accNumber;
        std::string accName;
        double balance;
        double amount;

    public:
        AccountBase();
        AccountBase(std::string,std::string,double);
        //AccountBase(std::string,std::string);
        AccountBase(const AccountBase&);
        virtual int debit(double)=0;
        virtual int credit(double)=0;
        virtual void display();
        double getBalance() const;


};
class SavingsAccount : public AccountBase
{
    public:
        SavingsAccount();
        SavingsAccount(std::string, std::string,double);
        SavingsAccount(std::string,std::string);
        int debit(double); //override
        int credit(double); //override
        void display(); //override
};
class CreditAccount : public AccountBase
{
    public:
        CreditAccount();
        CreditAccount(std::string,std::string,double);
        CreditAccount(std::string,std::string);
        int debit(double); //override
        int credit(double); //override
        void display();
};
#endif // ACCOUNTBASE_H
