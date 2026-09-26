#include <iostream>
using namespace std;

// Function to add two integers
int add(int first, int second)
{
    return first + second;
}

// Function to add two double values
double add(double first, double second)
{
    return first + second;
}

// Function to add three integers
int add(int first, int second, int third)
{
    return first + second + third;
}

int main()
{
    // Calls add(int, int)
    cout << "Sum of two integers: " << add(10, 20) << endl;

    // Calls add(double, double)
    cout << "Sum of two doubles: " << add(2.5, 3.7) << endl;

    // Calls add(int, int, int)
    cout << "Sum of three integers: " << add(10, 20, 30) << endl;

    return 0;
}