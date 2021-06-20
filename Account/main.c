#include <iostream>

using namespace std;
#include "AccountBase.h"
int main()
{

    AccountBase *acc;
    acc = new SavingsAccount("08","rahul",20000);
    acc->credit();

    cout << "Hello world!" << endl;
    return 0;
}
