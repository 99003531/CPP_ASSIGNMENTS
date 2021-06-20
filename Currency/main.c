#include <iostream>
#include "Currency.h"

using namespace std;

int main(){
    
    cout << "Attempting to create a money object with $12.34\n";
    Money money(12,34);
    cout << money << endl;
    
    cout << "Input your own value as a float: ";
    Money money2;
    cin >> money2;
    cout << money2 << endl;
    
    cout << "The total of the two values is " << money+money2 << endl;
    cout << "The difference of the two values is " << money-money2 << endl;
    
    
    return 0;
}
