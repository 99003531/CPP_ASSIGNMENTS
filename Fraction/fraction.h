#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <string>

class fractional{
   
        public:
         void getdata();
        void operator+(fractional);
         void operator-(fractional);
         void operator *(fractional);
         void operator /(fractional);

        private:
                  int numer;
                  int denom;
    
};
