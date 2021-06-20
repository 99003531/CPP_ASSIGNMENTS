#include <iostream>
#include "Image.h"

using namespace std;
int main(){
Image r1(10,11,12,2);
Image r2(2,3);
cout<<"The image is moved by  "<< r2.move();<endl;
Image r3(3);
cout<<"The image is scaled by"<< r2.scale()<<endl;
Image r3(2,5);
cout<<"The volume of box is "<<r3.resize()<<endl;
}
