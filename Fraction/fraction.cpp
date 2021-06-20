#include <iostream>
#include "Fraction.h"


void fractional::getdata()
{

                 cout<<"\n enter the numerator part of the fractional no. :: ";
                 cin>>numer;
                 cout<<"\n enter the denominator part of the fractional no. :: ";
                 cin>>denom;

}
 void fractional::operator+(fractional c1)
 {
         fractional temp;
         temp.numer=(numer*c1.denom)+(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\fraction no. after addition :: ";
         cout<<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void fractional::operator -(fractional c1)
 {
         fractional temp;
         temp.numer=(numer*c1.denom)-(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\n fraction no. after subtraction :: ";
         cout<<"\n numerator = " <<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void fractional::operator *(fractional c1)
 {
         fractional temp;
         temp.numer=numer*c1.numer;
         temp.denom=denom*c1.denom;
         cout<<"\n fractional no. after multiplication :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<< temp.denom;
 }
 void fractional:: operator /(fractional c1)
 {
         fractional temp;
         temp.numer= numer*c1.denom;
         temp.denom=c1.numer*denom;
         cout<<"\n fractional no. after dividation :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
     
