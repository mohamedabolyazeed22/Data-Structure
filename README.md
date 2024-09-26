# **🚗 Introduction to C++ Classes**

## **📘 Overview**
In C++, classes are a fundamental concept in **Object-Oriented Programming (OOP)**. They allow you to create user-defined types that bundle both data (attributes) and functions (methods) that operate on the data.

---

## **❓ What is a Class?**
A class is a **blueprint** for creating objects. It defines the properties (data) and behaviors (methods) that the objects created from the class can have.

---

## **🛠️ Basic Structure of a Class**

```cpp
class ClassName {
    // Access specifier: public, private, protected
public:
    // Attributes (also called member variables)
    int attribute1;
    double attribute2;

    // Constructor: Initializes objects of the class
    ClassName(int a, double b) {
        attribute1 = a;
        attribute2 = b;
    }

    // Methods (also called member functions)
    void display() {
        cout << "Attribute 1: " << attribute1 << endl;
        cout << "Attribute 2: " << attribute2 << endl;
    }
};

```
---

## **🔑 Key Components of a Class**

1. Access Specifiers
Control how the members of the class (attributes and methods) can be accessed:
- `public`: Members are accessible from outside the class.
- `private`: Members are accessible only from within the class.
- `protected`: Members are accessible in the class and in derived classes.

2. Attributes (Data Members)
Variables that hold data specific to an object.

```cpp
int attribute1;
double attribute2;

```

3. Methods (Member Functions)
Functions that operate on the class's attributes.

```cpp
void display();

```

4. Constructors
Special functions used to initialize objects of a class. Constructors typically have the same name as the class and do not have a return type.

```cpp

ClassName(int a, double b);
```

---

## **🚘 Example: Creating and Using a Class**

```cpp

#include <iostream>

using namespace std;

class Car {
public:
    string make;
    string model;
    int year;

    // Constructor
    Car(string m, string mo, int y) {
        make = m;
        model = mo;
        // Creative code: If the car year is unrealistic, set a default year
        year = (y > 1885 && y <= 2024) ? y : 2024;
    }

    // Method to display car details
    void displayInfo() {
        cout << "🚗 Car Details 🚗" << endl;
        cout << "===================" << endl;
        cout << "Make  : " << make << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
        cout << "===================" << endl;
        checkCarAge();
    }

    // Additional method to check car age and display a message
    void checkCarAge() {
        int currentYear = 2024;
        int carAge = currentYear - year;
        
        if (carAge == 0) {
            cout << "🎉 Congratulations on your brand new car!" << endl;
        } else if (carAge > 0 && carAge <= 5) {
            cout << "Your car is relatively new! Enjoy the ride 🚘" << endl;
        } else if (carAge > 5 && carAge <= 20) {
            cout << "Your car is getting some age. Keep it well-maintained! 🛠️" << endl;
        } else {
            cout << "🚙 Wow! Your car is a classic! Keep it rolling smoothly!" << endl;
        }
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Toyota", "Corolla", 2021);
    
    // Call method to display car info
    myCar.displayInfo();
    
    return 0;
}
```

---

## **💡 Explanation:**

 - We define a `Car` class with attributes like `make`, `model`, and `year`.
 - A constructor initializes these attributes when a `Car` object is created.
 - The method `displayInfo()` prints the details of the car.
 
 ---

## **✨ Key Benefits of Using Classes:**

 - `Encapsulation`: Bundles data and methods into a single unit.
 - `Reusability`: Classes allow code reuse.
 - `Abstraction`: Simplifies complex systems by modeling them as objects.

 ---

 # **🧭 Pointers in C++**

 ## **📘 Overview**
In C++, a pointer is a variable that stores the memory address of another variable. Pointers are one of the most powerful features in the language, enabling dynamic memory management, efficient array handling, and the creation of advanced data structures such as linked lists, trees, and graphs. Pointers also provide flexibility in passing large data structures to functions and are essential for low-level programming tasks.

---

## **❓ What are Pointers?**

A pointer is a variable that stores the memory address of another variable. Instead of holding the actual value, a pointer "points to" a specific memory location where the variable resides. This allows for more efficient manipulation of data, especially when dealing with large structures or dynamic memory allocation.

---
# **Key Concepts:**


##  **1- Declaring Pointers**

Pointers are declared using the asterisk (*) symbol before the pointer name, which indicates that the variable is of pointer type.

```cpp

int *ptr;

```
Here, `ptr` is a pointer to an integer type.

---

## **2- Pointer Assignment:**

To assign a value to a pointer, use the address-of operator (&) to retrieve the memory address of a variable.

```cpp

int x = 10;
int *ptr = &x;

```
In this case, `ptr` now holds the address of the variable `x`.

---

## **3- Pointer Dereferencing:**

To access or modify the value at the memory location a pointer is pointing to, use the dereference operator (*).

```cpp

int x = 10;
int *ptr = &x;
cout << *ptr << endl;  // Output: 10

```
Dereferencing `ptr` gives you the value stored at the memory address of `x`.

---

## **4- Pointer Operations**

Some common operations that can be performed with pointers include:

  - `Pointer arithmetic`: You can move the pointer to the next or previous memory location (e.g., in arrays).
  - `Pointer comparison`: Pointers can be compared to check if they point to the same memory address.
  - `Pointer assignment`: One pointer can be assigned the value of another, making both point to the same memory location.

```cpp

int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;  // Points to the first element of the array
ptr++;  // Now points to the second element

```

---

## **Common Pointer Pitfalls**

1. Dangling Pointers:
A pointer that references memory that has already been freed or deallocated.

2. Null Pointers:
A pointer that points to no valid memory location. It is a good practice to initialize pointers to `nullptr`.

3. Wild Pointers:
A pointer that has not been initialized to any specific address, leading to unpredictable behavior.

---

## **Best Practices**

- Use Smart Pointers: Smart pointers such as `unique_ptr` and `shared_ptr` automatically manage memory, reducing the risk of memory leaks and dangling pointers.

- Check for Null Pointers: Always ensure a pointer is not `nullptr` before dereferencing it.

- Use `const` Correctness: Use the `const` keyword to ensure that a pointer points to a constant value when necessary, enforcing immutability and preventing unintended modifications.

---

## **Examples**

---

## **Example 1: Declaring and Assigning a Pointer**

```cpp

int x = 10;
int *ptr;  // declare a pointer

ptr = &x;  // assign the address of x to ptr

cout << *ptr << endl;  // Output: 10

```

## **Example 2: Dereferencing a Pointer**

```cpp

int x = 10;
int *ptr = &x;

*ptr = 20;  // dereference the pointer and assign a new value

cout << x << endl;  // Output: 20

```

## **Example 3: Pointer Arithmetic**

```cpp

int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;  // point to the first element of the array

cout << *ptr << endl;  // Output: 1

ptr++;  // increment the pointer to point to the next element

cout << *ptr << endl;  // Output: 2

```

## **Example 4: Pointer Comparison**

```cpp

int x = 10;
int y = 20;
int *ptr1 = &x;
int *ptr2 = &y;

if (ptr1 == ptr2) {
    cout << "Pointers are equal" << endl;
} else {
    cout << "Pointers are not equal" << endl;
}

```

## **Example 5: Dynamic Memory Allocation**

```cpp

int *ptr = new int;  // dynamically allocate memory for an int

*ptr = 10;

cout << *ptr << endl;  // Output: 10

delete ptr;  // deallocate the memory

```

## **Example 6: Using Smart Pointers**

```cpp

unique_ptr<int> ptr(new int);  // use a unique_ptr to manage memory

*ptr = 10;

cout << *ptr << endl;  // Output: 10

```
