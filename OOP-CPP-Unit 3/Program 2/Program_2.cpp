#include <iostream>
using namespace std;

// Function to calculate area of a square
int calculateArea(int side)
{
    return side * side;
}

// Function to calculate area of a rectangle
int calculateArea(int length, int width)
{
    return length * width;
}

// Function to calculate area of a circle
double calculateArea(double radius)
{
    constexpr double PI = 3.141592653589793;

    return PI * radius * radius;
}

int main()
{
    // Calculate and display square area
    cout << "Square Area: " << calculateArea(5) << endl;

    // Calculate and display rectangle area
    cout << "Rectangle Area: " << calculateArea(6, 4) << endl;

    // Calculate and display circle area
    cout << "Circle Area: " << calculateArea(2.0) << endl;

    return 0;
}