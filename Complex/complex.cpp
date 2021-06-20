void complex::getdata()
{
                cout<<"\n enter the real part of the complex :: ";
                cin>>real;
                cout<<"\n enter the imaginary part of the complex :: ";
                cin>>image;
}

void complex :: operator +  (complex c1)
{
        complex temp;
        temp.real=real+c1.real;
        temp.image=image+c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<temp.image<<"i\n";
        }
}

void complex ::operator-(complex c1)
{
        complex temp;
        temp.real = real-c1.image;
        temp.image= image-c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<"\n temp.real"<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<temp.real<<temp.image<<"i\n";
    }
}

