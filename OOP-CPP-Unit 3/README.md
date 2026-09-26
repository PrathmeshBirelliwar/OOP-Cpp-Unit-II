# Object-Oriented Programming with C++ – Unit III

## Student Information

| Details | Information |
|---|---|
| **Student Name** | Prathmesh Birelliwar |
| **ZPRN** | 125UAD1309 |
| **Class / Division** | FY-B.Tech / Division B |
| **Course Name** | Object-Oriented Programming with C++ |
| **Unit** | Unit III – Polymorphism |

---

# Unit III – Polymorphism

## Description

This repository contains the C++ programming practicals for **Unit III – Polymorphism** of the Object-Oriented Programming with C++ course.

The programs demonstrate important Object-Oriented Programming concepts such as:

- Function Overloading
- Operator Overloading
- Unary Operator Overloading
- Prefix and Postfix Operator Overloading
- Binary Operator Overloading
- Friend Functions and Operators
- Compile-Time Polymorphism
- Run-Time Polymorphism
- Virtual Functions
- Pure Virtual Functions
- Abstract Classes
- Base Class Pointers and References
- Virtual Destructors
- Object Slicing
- Polymorphic Collections

---

# List of Programs

## Program 01 – Function Overloading

Demonstrates **function overloading** by creating multiple `add()` functions with different parameter lists.

**OOP Concept:** Compile-Time Polymorphism / Function Overloading

---

## Program 02 – Area Calculator

Calculates the area of a square, rectangle, and circle using overloaded `calculateArea()` functions.

**OOP Concept:** Function Overloading

---

## Program 03 – Unary Minus Operator Overloading

Demonstrates overloading of the unary minus (`-`) operator using a `Number` class.

**OOP Concept:** Unary Operator Overloading

---

## Program 04 – Prefix and Postfix Increment

Demonstrates the difference between prefix (`++object`) and postfix (`object++`) increment operators.

**OOP Concept:** Operator Overloading

---

## Program 05 – Complex Number Addition

Demonstrates addition of two complex numbers by overloading the `+` operator.

**OOP Concept:** Binary Operator Overloading

---

## Program 06 – Distance Comparison

Compares two distance objects by overloading the greater-than (`>`) operator.

**OOP Concept:** Relational Operator Overloading

---

## Program 07 – Friend Operator Overloading

Demonstrates the use of a **friend function** to overload the `+` operator for adding an integer to a complex number.

**OOP Concept:** Friend Function and Operator Overloading

---

## Program 08 – Base Pointer Without Virtual Function

Demonstrates the behavior of a base class pointer when a virtual function is not used.

**OOP Concept:** Static Binding

---

## Program 09 – Base Pointer With Virtual Function

Demonstrates run-time polymorphism using a base class pointer and a virtual function.

**OOP Concept:** Run-Time Polymorphism / Virtual Function

---

## Program 10 – Base Reference With Virtual Function

Demonstrates run-time polymorphism using a base class reference with different derived class objects.

**OOP Concept:** Run-Time Polymorphism / Virtual Function

---

## Program 11 – Abstract Class and Pure Virtual Function

Demonstrates an abstract `Shape` class containing a pure virtual `area()` function and its implementation in a derived class.

**OOP Concept:** Abstract Class / Pure Virtual Function

---

## Program 12 – Polymorphic Collection of Shape Pointers

Demonstrates storing different derived class objects in a collection using base class pointers and calculating their areas.

**OOP Concept:** Run-Time Polymorphism / Polymorphic Collection

---

## Program 13 – Virtual Destructor

Demonstrates the use of a virtual destructor when deleting a derived class object through a base class pointer.

**OOP Concept:** Virtual Destructor

---

## Program 14 – Object Slicing

Demonstrates the difference between passing a derived class object by value and by reference to a base class function.

**OOP Concept:** Object Slicing

---

## Program 15 – Payment System

Implements a simple payment system using an abstract `Payment` class with different payment methods such as Card, UPI, and Net Banking.

**OOP Concept:** Abstract Class / Run-Time Polymorphism

---

## Program 16 – Payroll Mini Project

Implements a simple payroll system using an abstract `Employee` class with `PermanentEmployee` and `ContractEmployee` derived classes.

**OOP Concept:** Inheritance / Abstract Class / Run-Time Polymorphism

---

# Repository Structure

```text
OOPS/
│
├── OOP-CPP-Unit 2/
│
└── OOP-CPP-Unit 3/
    │
    ├── Program_01/
    │   ├── Description
    │   └── Program_1.cpp
    │
    ├── Program_02/
    │   ├── Description
    │   └── Program_2.cpp
    │
    ├── Program_03/
    │   ├── Description
    │   └── Program_3.cpp
    │
    ├── Program_04/
    │   ├── Description
    │   └── Program_4.cpp
    │
    ├── Program_05/
    │   ├── Description
    │   └── Program_5.cpp
    │
    ├── Program_06/
    │   ├── Description
    │   └── Program_6.cpp
    │
    ├── Program_07/
    │   ├── Description
    │   └── Program_7.cpp
    │
    ├── Program_08/
    │   ├── Description
    │   └── Program_8.cpp
    │
    ├── Program_09/
    │   ├── Description
    │   └── Program_9.cpp
    │
    ├── Program_10/
    │   ├── Description
    │   └── Program_10.cpp
    │
    ├── Program_11/
    │   ├── Description
    │   └── Program_11.cpp
    │
    ├── Program_12/
    │   ├── Description
    │   └── Program_12.cpp
    │
    ├── Program_13/
    │   ├── Description
    │   └── Program_13.cpp
    │
    ├── Program_14/
    │   ├── Description
    │   └── Program_14.cpp
    │
    ├── Program_15/
    │   ├── Description
    │   └── Program_15.cpp
    │
    ├── Program_16/
    │   ├── Description
    │   └── Program_16.cpp
    │
    └── README.md