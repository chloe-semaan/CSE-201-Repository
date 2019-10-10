#include <iostream>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    void setvalue(){
        cin>>real;
        cin>>imaginary;
    }
    Complex();
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void sum(Complex c1, Complex c2){
        real=c1.real+c2.real;
        imaginary=c1.imaginary+c2.imaginary;
    }
    Complex(double real, double imaginary);
};
