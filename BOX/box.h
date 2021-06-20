
#ifndef _BOX_H_
#define _BOX_H_

#include <string>

class Box{
   
        public:
             Box();
             Box(int, int, int); 
             Box(Box &r);
             int length() {return length};
             int breadth() {return breadth};
             int height() {return height};
             void volume();
             void get_length(int l);
             void get_breadth(int b);
             void get_height(int h);
             void display();

        private:
                 int length;
	          int breadth;
	          int height;
            int volume;
    
};
