#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <string>

class complex{
   
        public:
            void getdata();
            void operator + (complex);
           void operator - (complex);

        private:
                  int real;
                  float image;
    
};
