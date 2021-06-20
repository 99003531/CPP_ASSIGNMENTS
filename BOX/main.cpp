#include <iostream>
#include "Box.h"

using namespace std;


int main(){
 Box r1(10,11,12);
 r1.display();
 Box r2;
 r2.display();
Box r3=r1;
r3.display();
}
