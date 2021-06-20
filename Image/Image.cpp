
#include <string>
#include <iostream>
#include "Image.h"


    Image::Image(){
       m_x=1;
       m_y=1;
       m_width=1;
       m_height=1;
}
    Image::Image(int x,int y,int width,int height)){
       m_x=x;
       m_y=y;
       m_width=width;
       m_height=height;
}
   
     void Image::move(int x,int y)
    {
         cout<<"The Image is moved by"<<m_x<<" "<<m_y<<endl;
    }
    
    }
    void Image::scale(int h)
    {
         return 2*m_height;
    
    }
    void Image::resize(int width,int height)
    {
         return (0.5*m_width*m_height);
     }
    void Image::display()
    {
        cout<<"The image display"<<endl;
    }
