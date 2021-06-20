#include <string>
#include <iostream>
#include "Distance.h"

distance::distance()
{
feet=0;inches=0;
}

distance::distance(int ft,float inch)       
 {feet=ft;
  inches=inch;
}

void distance::getdata()
    {   cout<<\"Enter Feet and inches respectively: \";
    cin>>feet>>inches;
    }
void distance::display()
    { cout<<\"Feet : \"<<feet<<endl<<\"Inches :\"<<inches;}


distance operator +(distance &ob1, distance &ob2)
{
    distance temp;
    temp.feet   = ob1.feet   + ob2.feet;
    temp.inches = ob1.inches + ob2.inches;
    if(temp.inches > 12)
    {
       temp.inches -= 12;
       temp.feet++;
    }
    return(temp);
}

distance operator -(distance &ob1, distance &ob2)
{
    distance temp;
    float ob1inch,ob2inch;
    ob1inch = (ob1.feet * 12) + ob1.inches;
    ob2inch = (ob2.feet * 12) + ob2.inches;
    temp.inches = ob1inch - ob2inch;
    temp.feet   = temp.inches/12;
    temp.inches = temp.inches - (temp.feet * 12);
    return(temp);
}

distance operator *(int d, distance &ob)
{
    distance temp;
    float i;
    temp.feet   = d * ob.feet;
    temp.inches = d * ob.inches;
    i = temp.inches/12;
    temp.feet   = temp.feet + i;
    temp.inches = temp.inches-(i*12.0);
    return(temp);
}

int operator ==(distance &ob1, distance &ob2)
{
   if(ob1.feet == ob2.feet && ob1.inches == ob2.inches)
      return(1);
   else
      return(0);
}

int operator < (distance &ob1, distance &ob2)
{
   if(ob1.feet < ob2.feet && ob1.inches < ob2.inches)
      return(1);
   else
      return(0);
}

int operator > (distance &ob1, distance &ob2)
{
   if(ob1.feet > ob2.feet && ob1.inches > ob2.inches)
      return(1);
   else
      return(0);
}

istream & operator >> (istream &din, distance &ob3)
{
    cout<<\"\\nEnter Data for Object3\\n\";
    cout<<\"Enter Feet   : \";
    din>>ob3.feet;
    cout<<\"Enter Inches : \";
    din>>ob3.inches;
    return(din);
}

ostream & operator << (ostream &dout, distance &ob3)
{
    dout<<\"\\nData of OBJECT3\\n\";
    dout<<\"\\nFeet   :\"<<ob3.feet;
    dout<<\"\\nInches :\"<<ob3.inches;
    return(dout);
}
  

