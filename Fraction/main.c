#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
 {

         fractional c1, c2;
         int n;
         do
         {
                 cout<<"\n\n 1.Input data for rational no. ";
                 cout<<"\n 2. Addition of rational no. ";
                 cout<<"\n 3. Subtraction of rational no. ";
                 cout<<"\n 4. Multiplication of rational no.";
                 cout<<"\n 5. Division of rational no. ";
                 cout<<"\n 6. Quit";
                 cout<<"\n\n Enter your choice :: ";
                 cin>>n;
                 switch(n)
                 {
                         case 1:
                         cout<<endl<<"\n enter the data for first fractional no.:: ";
                         c1.getdata();
                         cout<<endl<<"\n enter the data for second fractional no. :: ";
                         c2.getdata ();
                         break;

                         case 2:
                         c1+c2;
                         break;

                         case 3:
                         c1-c2;
                         break;

                         case 4:
                         c1*c2;
                         break;

                         case 5:
                         c1/c2;
                         break;

                         case 6:
                         exit(1);
                         break;
                 }
         } while (n!=6);
         return 0;
 }

