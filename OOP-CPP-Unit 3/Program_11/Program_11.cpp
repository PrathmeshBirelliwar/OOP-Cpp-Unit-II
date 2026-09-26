#include <iostream>
using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual function
    virtual double area() const = 0;

    // Virtual destructor
    virtual ~Shape() = default;
};

// Derived class
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth)
    {
    }

    // Implementing the pure virtual function
    double area() const override
    {
        return length * width;
    }
};

int main()
{
    // Create a Rectangle object
    Rectangle rectangle(8.0, 4.0);

    // Calculate and display the area
    cout << "Rectangle Area: " << rectangle.area() << endl;

    return 0;
}