#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual functions
    virtual double area() const = 0;
    virtual void displayName() const = 0;

    // Virtual destructor
    virtual ~Shape() = default;
};

// Derived class Rectangle
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

    // Calculate rectangle area
    double area() const override
    {
        return length * width;
    }

    // Display shape name
    void displayName() const override
    {
        cout << "Rectangle";
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    explicit Circle(double givenRadius) : radius(givenRadius)
    {
    }

    // Calculate circle area
    double area() const override
    {
        constexpr double PI = 3.141592653589793;

        return PI * radius * radius;
    }

    // Display shape name
    void displayName() const override
    {
        cout << "Circle";
    }
};

int main()
{
    // Vector stores pointers to different Shape objects
    vector<unique_ptr<Shape>> shapes;

    // Add Rectangle object to the vector
    shapes.push_back(make_unique<Rectangle>(5.0, 3.0));

    // Add Circle object to the vector
    shapes.push_back(make_unique<Circle>(2.0));

    // Process every shape using the base-class pointer
    for (const auto& shape : shapes)
    {
        shape->displayName();
        cout << " Area: " << shape->area() << endl;
    }

    return 0;
}