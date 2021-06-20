#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <string>

class Image{
   
        public:
            Image();
           Image(int,int,int,int);
           
           void move(int,int);
           void scale(int);
           void resize(int,int);
           void dispay();

        private:
                 int m_x;
	int m_y;
	int m_width;
                  int m_height; 
};
