#include <iostream>
using namespace std;

class AccountBase {
string m_accNumber;
string m_accName;
double m_balance;
public:
AccountBase();
AccountBase(std::string,std::string,double);
AccountBase(std::string,std::string);
AccountBase(const Account&);
virtual void debit(double)=0;
virtual void credit(double)=0;
virtual void dispay() const = 0;
double getBalance() const;
}
class SavingsAccount : public AccountBase {
public:
SavingsAccount();
{
m_accNumber=123;
m_accName="har";
m_balance=12300;
}
SavingsAccount(string a,string b,double c);
{
m_accNumber=a;
m_accName=b;
m_balance=c;
}
void debit(double money)
{ 
 m_balance=money;
 m_balance-=100;
}
 
void credit(double cost) 
{
 m_balance=cost;
 m_balance+=100;
}
void dispay() const; 
{
cout<<m_balance;
};
class CreditAccount : public AccountBase {
public:
CreditAccount();
{
m_accNumber=123;
m_accName="har";
m_balance=12300;
}
CreditAccount(string a,string b,double c);
{
m_accNumber=a;
m_accName=b;
m_balance=c;
}
void debit(double money)
{ 
 m_balance=money;
 m_balance-=100;
}
 
void credit(double cost) 
{
 m_balance=cost;
 m_balance+=100;
}
void dispay() const; 
{
cout<<m_balance;
};
int main()
{
Account* acc;
SavingsAccount sav;
acc->&sav;
acc->debit();
acc->credit();
acc->display();
CreditAccount cre;
acc->&cre;
acc->debit();
acc->credit();
acc->display();






