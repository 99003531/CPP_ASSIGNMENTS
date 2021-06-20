#include <iostream>

using namespace std;

template <class T>
class ComplexNumber
{
public:
    ComplexNumber();
    ComplexNumber(T real , T imaginary);
    ComplexNumber<T> operator+(const ComplexNumber<T>&)const;


private:
    T realnumber;
    T imaginarynumber;
};


template<class T>
ComplexNumber<T>::ComplexNumber()
{
    realnumber = 0.0;
    imaginarynumber = 0.0;
}


template<class T>
ComplexNumber<T>::ComplexNumber(const T real,const T imaginary)
{
    realnumber = real;
    imaginarynumber = imaginary;
}


template<class T>
ComplexNumber<T> ComplexNumber<T>::operator +(const ComplexNumber<T>& other) const
{
    ComplexNumber<T> temp;
    temp.realnumber = realnumber + other.realnumber;
    temp.imaginarynumber = imaginarynumber + other.imaginarynumber;
    return temp;
}


int main(){
  ComplexNumber<double> cn1(1,1);
  ComplexNumber<double> cn2(1,1);
  ComplexNumber<double> cn3 = cn1+cn2;
  cout<<cn3<<endl;
}
