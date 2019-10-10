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
int main() {
  Complex c1;
  Complex c2 = Complex(3,4);

  c1.normalize();

  c1.setReal(c2.getReal());
  c1.setImaginary(c2.getImaginary());

  std::cout << "c1 magnitude: " << c1.magnitude() << std::endl;
  c1.normalize();

  std::cout << "c1 is: " << c1.getReal() <<
    " + " << c1.getImaginary() << " * i" << std::endl;
  std::cout << "c1 magnitude:" << c1.magnitude() << std::endl;
}
