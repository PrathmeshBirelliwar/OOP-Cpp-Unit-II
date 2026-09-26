#include <iostream>
#include <string>
#include <utility>
using namespace std;

// Abstract base class
class Employee
{
protected:
    int employeeId;
    string name;

public:
    // Constructor
    Employee(int id, string employeeName)
        : employeeId(id), name(std::move(employeeName))
    {
    }

    // Pure virtual function
    virtual double calculateSalary() const = 0;

    // Display basic employee details
    void displayBasicDetails() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
    }

    // Virtual destructor
    virtual ~Employee() = default;
};

// Derived class for permanent employees
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double allowance;

public:
    // Constructor
    PermanentEmployee(
        int id,
        string employeeName,
        double basic,
        double extra)
        : Employee(id, std::move(employeeName)),
          basicSalary(basic),
          allowance(extra)
    {
    }

    // Calculate salary for permanent employee
    double calculateSalary() const override
    {
        return basicSalary + allowance;
    }
};

// Derived class for contract employees
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor
    ContractEmployee(
        int id,
        string employeeName,
        double rate,
        int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate),
          hoursWorked(hours)
    {
    }

    // Calculate salary for contract employee
    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

// Function to print employee pay slip
void printPaySlip(const Employee& employee)
{
    employee.displayBasicDetails();

    // Calls the correct salary function
    // using run-time polymorphism
    cout << "Salary: Rs. "
         << employee.calculateSalary()
         << endl << endl;
}

int main()
{
    // Create a permanent employee
    PermanentEmployee permanentEmployee(
        101,
        "Asha",
        40000.0,
        8000.0
    );

    // Create a contract employee
    ContractEmployee contractEmployee(
        102,
        "Vikas",
        500.0,
        80
    );

    // Display pay slips
    printPaySlip(permanentEmployee);
    printPaySlip(contractEmployee);

    return 0;
}