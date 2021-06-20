
#include <string>
#include <iostream>
#include "Box.h"


    Box::Box(){
       length=1;
       breadth=1;
       height=1;
}
   

     Box::Box(int l,int b,int h)){
       length=l;
       breadth=b;
       height=h;
      }
     
     void Box::get_length(int l)
    {
         length=l;
    
    }
    void Box::get_breadth(int b)
    {
         breadth=b;
    
    }
    void Box::get_height(int h)
    {
         height=h;
     }
    void Box::volume()
    {
        volume= length*breadth*height;
    }
     void Box::display()
{
cout<<"volume is "<<volume<<endl;
}
