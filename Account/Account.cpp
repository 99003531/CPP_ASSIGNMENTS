
Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers
Meet
New meeting
Join a meeting
Hangouts

1 of 15,350
Fwd: accountBase inheritance
Inbox

harshitha .r
Attachments
12:52 PM (0 minutes ago)
to me


---------- Forwarded message ---------
From: RAJATH P D <rajathpd98@gmail.com>
Date: Sun, Jun 20, 2021, 11:42 AM
Subject: accountBase inheritance
To: <harshirharshitha@gmail.com>




3 Attachments
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
AccountBase.cpp
Displaying AccountBase.cpp.
