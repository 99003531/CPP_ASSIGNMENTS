#include<iostream>
using namespace std;
class IShape   // Abstract Base Class
{
                public:
                        virtual void Enter_data( ) = 0;  // pure virtual function
                        virtual void Area( ) = 0 ;     
                        virtual void circumference()=0;       // pure virtual function
};
class Rectangle : public IShape // First Derived class
{
                private:
                        float length ;
                        float breadth ;
                
                public:
                        void Enter_data(void)
                        {
                                cout << "\n Enter the data for the Rectangle........" ;
                                cout << "\n\t Enter the length of the rectangle: " ;
                                cin >> length ;
                                cout << "\t Enter the breadth of the rectangle: " ;
                                cin >> breadth ;
                        }
                        void Area(void)
                        {
                                cout << "\n\t The area of the rectangle = " << (length * breadth) ;
                        }
	      void circumference(void)
	      {
                               cout<<"The circumference of retangke ="<<(2*(length+breadth));
                        }
};

class Circle : public IShape // Second Derived class
{
                private:
                        float radius ;
                public:
                        void Enter_data(void)
                        {
                                cout << "\n\n Enter the data for the Circle..........." ;
                                cout << "\n\t Enter the radius of the circle: " ;
                                cin >> radius ;
                        }
                        void Area(void)
                        {
                                cout << "\n\t The area of the circle = " << (3.14 * radius * radius) ;
                        }
                         void circumference(void)
	      {
                               cout<<"The circumference of circle ="<<(2*3.14*radius);
                        }
};
class Triangle:public IShape
{
	private:
	         float base;
	         float height;
                    public:
                        void Enter_data(void)
                        {
                                cout << "\n Enter the data for the Triangle........" ;
                                cout << "\n\t Enter the base of the : " ;
                                cin >> base ;
                                cout << "\t Enter the height of the Triangle: " ;
                                cin >> height ;
                        }
                        void Area(void)
                        {
                                cout << "\n\t The area of the Triangle = " << (0.5*base*height) ;
                        }
};	      
int main()
{
                IShape* shp ; // pointer to the object of the base class Shape
                Rectangle rec ; // object of class Rectangle
                shp = &rec ;
                shp->Enter_data( ) ;
                shp->Area( );
                shp->circumference();
                Circle cir ;     // object of class Circle
                shp = &cir ;
                shp->Enter_data( );
                shp->Area( );
                shp->circumference();
                Triangle tri;
	shp=&tri;
                 shp->Enter_data();
                shp->Area();
return 0;
}
