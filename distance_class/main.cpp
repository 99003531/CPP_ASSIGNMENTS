#include <iostream>
#include "Distance.h"

using namespace std;
int main()
{
  clrscr();
  distance ob1,ob2,ob3;  //Invoked constructor1

  cout<<\"\\n=====Enter Data for OBJECT1=====\\n\";
  ob1.getdata();
  cout<<\"\\n\\n=====Enter Data for OBJECT2=====\\n\";
  ob2.getdata();
  int choice,data;
  while(1)
  {
   up:
   clrscr();
   cout<<\"=====Display for OBJECT1=====\\n\";
     ob1.display();
  cout<<\"\\n=====Display for OBJECT2=====\\n\";
     ob2.display();
  cout<<endl;
    cout<<\"\\nChose your choice\\n\";
    cout<<\"1)  Addition            ( + )\\n\";
    cout<<\"2)  Subtraction         ( - )\\n\";
    cout<<\"3)  Multiplication      ( * )\\n\";
    cout<<\"4)  Comparision         ( == )\\n\";
    cout<<\"5)  Comparision         ( < )\\n\";
    cout<<\"6)  Comparision         ( > )\\n\";
    cout<<\"7)  Input               ( >> )\\n\";
    cout<<\"8)  Output              ( << )\\n\";
    cout<<\"Enter your choice:-\";
    cin>>choice;
    cout<<endl<<endl;
    switch(choice)
    {
       case 1 :  ob3 = ob1 + ob2;
         break;
       case 2 :  ob3 = ob1 - ob2;
         break;
       case 3 :    cout<<\"\\nEnter integer to be multiplied:-\";
           cin>>data;
           ob3 = data * ob1;
         break;
       case 4 :  if(ob1 == ob2)
           { cout<<\"\\nBoth Objects are equal or same value\\n\";}
         else
           { cout<<\"\\nThey are Unequal\\n\";}
         getch();
         goto up;
    case 5 :  if(ob1 < ob2)
           { cout<<\"\\nObject1 is Less than Object2\\n\";}
         else
           { cout<<\"\\nObject2 is Less than Object1\\n\";}
         getch();
         goto up;
       case 6 :  if(ob1 > ob2)
           { cout<<\"\\nObject1 is Greater than Object2\\n\";}
         else
           { cout<<\"\\nObject2 is Greater than Object1\\n\";}
         getch();
         goto up;
       case 7 :  cout<<\"\\nInputing Data in\\n\";
         cin>>ob3;
         break;
       case 8 : cout<<\"\\nOutputing Data out\\n\";
        cout<<ob3;
        break;
      default :  cout<<\"\\n\\nHave a nice day....\\n\";
          getch();
          goto out;
    }
    cout<<\"\\n\\nResult in OBJECT3 as under\\n\";
    ob3.display();
    getch();
}
out:
}
