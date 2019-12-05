// ASSIGNMENT 2

// Name : Surabhi Barve     Gr. no. 21810819

/*Implement a class Complex which represents the Complex Number data type. Implement the following operations: 
1. Constructor (including a default constructor which creates the complex number 0+0i). 
2. Overloaded operator+ to add two complex numbers. 
3. Overloaded operator* to multiply two complex numbers. 
4. Overloaded << and >> to print and read Complex Numbers. */


#include <iostream>
using namespace std;

class complex              //creation of class for complex numbers
{
 private :
         float real,imag;
 public :
    complex()              //default constructor
     {
        real=0;
        imag=0;
     }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    friend ostream &operator<<(ostream &out,const complex &c)      //overloaded operator <<
    {
        out << c.real;
        out << "+i" << c.imag << endl;
        return out;
    }
    friend istream &operator>>(istream &in, complex &c)            //overloaded operator >>
    {
        cout << "Enter Real Part ";
        in >> c.real;
        cout << "Enter Imaginary Part ";
        in >> c.imag;
        return in;
    }
    complex setdata(float r,float i)
    {
        real=r;
        imag=i;
    }
    complex operator +(complex c)                    //overloaded operator +
    {
        complex t;
        t.real= real + c.real;
        t.imag= imag + c.imag;
        return t;
    }
    complex operator *(complex c)                   //overloaded operator *
    {
        complex t;
        t.real= real*c.real - imag*c.imag;
        t.imag= real*c.imag + imag*c.real;
        return t;
    }
};
int main()
{
    cout<<"                           Complex Number";
    cout<< endl;
    complex c1,c2(1.5,2.5),c3,c4,c5,c6,c7;               //object of class creation
    cin>>c1;
    c3 = c1+c2;
    cout<<"Addition Of Complex Number is ";
    cout<<c3;
    cin>>c4;
    c5.setdata(2.5,3.0);                                 //calling of setdata() function
    c6 = c4*c5;
    cout<<"Multiplication  Of Complex Number is ";
    cout<<c6;
    c7 = c1+c2*c3;
    cout<<"Addition and Multiplication Of The Complex Number is  ";
    cout<<c7;
    return 0;
}
