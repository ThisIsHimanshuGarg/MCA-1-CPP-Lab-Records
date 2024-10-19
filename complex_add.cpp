#include <iostream>

class Complex
{
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    void read()
    {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imag;
    }

    void display() const
    {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main()
{
    Complex c1, c2, sum, diff;

    std::cout << "Enter first complex number:\n";
    c1.read();
    std::cout << "Enter second complex number:\n";
    c2.read();

    sum = c1 + c2;
    diff = c1 - c2;

    std::cout << "First complex number: ";
    c1.display();
    std::cout << "Second complex number: ";
    c2.display();
    std::cout << "Sum: ";
    sum.display();
    std::cout << "Difference: ";
    diff.display();

    return 0;
}