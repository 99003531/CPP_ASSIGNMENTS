#ifndef _DISTANCE_H_
#define _DISTANCE_H_

#include <string>

class distance{
   
        public:
              distance();   
              distance(int ft,float inch);
              void getdata();
              void display();
              friend distance operator +(distance &ob1, distance &ob2);
    	friend distance operator -(distance &ob1, distance &ob2);
   	 friend distance operator *(int d, distance &ob); //ob1= 2 * ob2
   	 friend int operator ==(distance &ob1, distance &ob2);
    	friend int operator < (distance &ob1, distance &ob2);
    	friend int operator > (distance &ob1, distance &ob2);
    	friend istream & operator >> (istream &din, distance &ob3);
    	friend ostream & operator << (ostream &dout, distance &ob3);
             
 
        private:
                 int feet;
                 float inches;
    
};
