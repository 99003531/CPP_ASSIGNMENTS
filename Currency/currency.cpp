#include <string>
#include <iostream>
#include "Currency.h"

double Money::getAmount() const {
    return dollars + cents/100.0;
}

int Money::getCents() const {
    return cents;
}

int Money::getDollars() const {
    return dollars;
}

Money Money::operator +(const Money& amount){
    int t_dollars=dollars + amount.dollars;
    int t_cents=cents + amount.cents;
    t_dollars += t_cents / 100;
    t_cents %= 100;
    return Money(t_dollars, t_cents);
}

Money operator -(const Money& amount1, const Money& amount2){
    int diff_dollars= amount1.dollars - amount2.dollars;
    int diff_cents= amount1.cents - amount2.cents;
    if (diff_cents < 0){
        diff_dollars -= 1;
        diff_cents += 100;
    }
    return Money(diff_dollars, diff_cents);
}

ostream& operator <<(ostream& outs, const Money& amount){
    outs << "$" << amount.dollars << "." << amount.cents;
    return outs;
}

istream& operator >>(istream& ins, Money& amount){
    float value;
    ins >> value;
    amount = Money(value);
    return ins;
}
