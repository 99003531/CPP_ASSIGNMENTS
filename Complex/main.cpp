#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{

        complex c1, c2;
        int n;
        do
        {
                cout<<"\n 1. Input data for complex no. ";
                cout<<"\n 2. Addition of complex no. ";
                cout<<"\n 3. Subtraction of complex no. ";
                cout<<"\n 4. Quit";
                cout<<"\n Enter your choice :: ";
                cin>>n;
                switch(n)

                {
                         case 1:
                         cout<<endl<<"\n Enter the data for First Complex No......";
                         c1.getdata();
                         cout<<endl<<"\n Enter the data for seconds Complex No.....";
                         c2.getdata();

                         break;

                         case 2:
                         c1+c2;

                         break;

                         case 3:
                         c1-c2;

                         break;

                         case 4:
                         exit(1);
                         break;
                        }
                } while (n!=4);
     return 0;
}
