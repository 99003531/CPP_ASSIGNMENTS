#include <iostream>

using namespace std;
#include "AccountBase.h"
int main()
{

    AccountBase *acc;
    acc = new SavingsAccount("12","Anitha",2000);
    acc->credit();

    cout << "Savings" << endl;
    return 0;
}
