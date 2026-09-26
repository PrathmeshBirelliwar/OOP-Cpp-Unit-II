#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart)
    {
    }

    // Overloading binary + operator
    Complex operator+(const Complex& other) const
    {
        // Add real parts and imaginary parts separately
        return Complex(real + other.real,
                       imaginary + other.imaginary);
    }

    // Function to display the complex number
    void display() const
    {
        cout << real;

        if (imaginary >= 0)
        {
            cout << " + ";
        }
        else
        {
            cout << " - ";
        }

        // Display imaginary part without negative sign
        cout << (imaginary >= 0 ? imaginary : -imaginary) << "i" << endl;
    }
};

int main()
{
    // Create two complex number objects
    Complex first(2, 3);
    Complex second(4, 5);

    // Add two complex numbers using overloaded + operator
    Complex sum = first + second;

    cout << "First complex number: ";
    first.display();

    cout << "Second complex number: ";
    second.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}