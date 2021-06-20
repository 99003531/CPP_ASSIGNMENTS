#ifndef _CURRENCY_H_
#define _CURRENCY_H_

#include <string>

class  Money{
   
        public:
             Bpublic:
    Money() : dollars(0), cents(0) {}
    Money(double amount) { dollars = (int)amount; cents = (int)ceil(100*(amount-dollars)); }
    Money(int theDollars, int theCents) : dollars(theDollars), cents(theCents) {}
    double getAmount() const;
    int getDollars( ) const;
    int getCents( ) const;
    friend ostream& operator <<(ostream& outs, const Money& amount);
    friend istream& operator >>(istream& ins, Money& amount);
    Money operator +(const Money& amount);
    friend Money operator -(const Money& amount1, const Money& amount2);
private:
    int dollars;
    int cents;
    int dollarsPart(double amount) const;
    int centsPart(double amount) const;
};
