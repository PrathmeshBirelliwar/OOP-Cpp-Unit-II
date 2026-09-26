#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;

public:
    // Constructor to initialize distance
    explicit Distance(int value) : meters(value)
    {
    }

    // Overloading the > operator
    bool operator>(const Distance& other) const
    {
        return meters > other.meters;
    }

    // Function to display distance
    void display() const
    {
        cout << meters << " meters" << endl;
    }
};

int main()
{
    // Create two Distance objects
    Distance first(120);
    Distance second(90);

    cout << "First distance: ";
    first.display();

    cout << "Second distance: ";
    second.display();

    // Compare two Distance objects
    if (first > second)
    {
        cout << "First distance is greater" << endl;
    }
    else
    {
        cout << "Second distance is greater or equal" << endl;
    }

    return 0;
}