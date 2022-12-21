## Table of content

- [namespaces](#namespaces)
- [standard input-output streams](#standard-input-output-streams)
- [class & instance](#class--instance)
- [member attributes & functions](#member-attributes--functions)
- [this pointer](#this-pointer-the-self-keyword)
- [initialization list](#initialization-list)
- [const](#const)
- [visibility](#visibility)
- [encapsulation](#encapsulation)
- [class vs struct](#class-vs-struct)
- [accessors / getters](#accessors-getters)
- [structural vs. physical comparison](#structural-vs-physical-comparison)
- [non member attributes & functions](#non-member-attributes--functions)
- [pointers to members](#pointers-to-members)
- [C++ string](#c-strings)
- [difference between std::cin and getline](#difference-between-stdcin-and-getline)
- [static attributes & functions within a class](#static-attributes-and-functions-within-a-class)

## Namespaces

- In C++, a namespace is a way to group related identifiers (e.g. names of functions, variables, etc.) together and give them a separate identity. Namespaces are typically used to avoid name collisions, which can occur when two different parts of a program use the same identifier for different purposes.

Here's an example of how to use namespaces in C++:
```C++
#include <iostream>

// Declare a namespace called "my_namespace"
namespace my_namespace {
    // Declare a function called "foo" in the "my_namespace" namespace
    void foo() {
        std::cout << "Hello from my_namespace::foo()!" << std::endl;
    }
}

int main() {
    // Call the "foo" function from the "my_namespace" namespace
    my_namespace::foo();

    return 0;
}
```

- In this example, we define a function called foo inside the my_namespace namespace. To call this function from outside the namespace, we use the :: operator followed by the function name. This is known as "qualifying" the function name with the namespace.

You can also define multiple namespaces in the same program, and you can nest namespaces inside each other to create a hierarchy. For example:

```C++
namespace outer {
    namespace inner {
        void foo() {
            std::cout << "Hello from outer::inner::foo()!" << std::endl;
        }
    }
}
```

>To call the foo function in this example, you would use the following syntax:
```C++
outer::inner::foo();
```
- You can also use the using keyword to import identifiers from a namespace into the current scope, which allows you to use them without qualifying them with the namespace name. For example:
```C++
#include <iostream>

namespace my_namespace {
    void foo() {
        std::cout << "Hello from my_namespace::foo()!" << std::endl;
    }
}

int main() {
    // Import the "foo" function from the "my_namespace" namespace
    using my_namespace::foo;

    // Call the "foo" function without qualifying it with the namespace name
    foo();

    return 0;
}
```
- In this example, we use the using keyword to import the foo function from the my_namespace namespace, so we can call it directly without qualifying it with the namespace name.

## Standard input-output streams

- in C++, the stdio streams are a group of classes that provide input and output functionality for reading from and writing to files and other input/output devices. The stdio streams are part of the C++ standard library and are defined in the <iostream> header file.

The stdio streams include the following classes:

◦ `std::istream`: A class for input streams, which are used to read data from a file or other input source.

◦ `std::ostream`: A class for output streams, which are used to write data to a file or other output destination.

◦ `std::iostream`: A class that combines the functionality of `std::istream` and `std::ostream`, allowing you to read from and write to a file or other input/output device.

- The `stdio` streams use a concept called "stream buffer" to manage the flow of data between the stream and the underlying input/output device. The stream buffer is an abstract class that defines the interface for reading and writing data, and the `stdio` stream classes (`istream`, `ostream`, and `iostream`) are derived from the stream buffer class.

- The `stdio` stream classes also have constructors and destructors, which are special member functions that are called when an object of the class is created or destroyed. The constructors are used to initialize the object's data members, and the destructors are used to clean up any resources that the object may have allocated.

Here's an example of how to use the `std::cout` output stream to write to the console:

```C++
#include <iostream>

int main() {
    // Write a message to the console using the "<<" operator
    std::cout << "Hello, world!" << std::endl;

    return 0;
}
```
- In this example, we use the `<<` operator to write a message to the `std::cout` output stream, which sends the message to the console. The `std::endl` manipulator is used to insert a newline character at the end of the message.

## Class and Instances

<!-- ## Member attributes & functions -->
- A class is a user-defined type that represents a collection of data and functions (also known as methods) that operate on that data. A class definition specifies the data and functions that are associated with a class, but does not create any actual objects of the class.

- To create an object of a class, you can use the class name followed by parentheses (()). This is called creating an instance of the class, or simply an instance. For example:
    
 ```C++
#include <iostream>

class MyClass {
   // class data and functions go here
};

int main() {
   MyClass instance; // create an instance of MyClass
   return 0;
}
```
    
- The data and functions that are defined within a class are known as members of the class. The data members represent the state of an object, while the functions (methods) represent the behavior of an object.

For example, consider the following class definition:
```C++
class Person {
   std::string name;
   int age;
public:
   void setName(std::string n) { name = n; }
   void setAge(int a) { age = a; }
   std::string getName() { return name; }
   int getAge() { return age; }
};
```
- This class defines a `Person` type, which has two data members: `name` and `age`. It also has four methods: `setName`, `setAge`, `getName`, and `getAge`, which allow you to set and get the values of the `name` and `age` data members.
- To create an instance of the `Person` class and use its methods, you can do the following:
    ```C++
    int main() {
   Person p;
   p.setName("Alice");
   p.setAge(30);
   std::cout << p.getName() << " is " << p.getAge() << " years old." << std::endl;
   return 0;
    }
    ```
    > This will output the following to the console:
    ```C++
    Alice is 30 years old.
    ```
 
- In C++, you can also define a class using a struct, which is similar to a class but with all members defaulting to public access (we are not suppossed to work it struct in this module, but still good to know about struct in OOP). For example:
    
    ```C++
    struct MyStruct {
   // struct data and functions go here
    };
    ```
- The main difference between a class and a struct is the default accessibility of their members. In a class, the members are private by default, while in a struct they are public by default.
    
## This pointer
- In C++, the this pointer is a special pointer that holds the address of the current object. It is automatically defined and passed to class methods when they are called, and it can be used to refer to the object itself within the method.

- The this pointer is typically used to distinguish between a class data member and a local variable with the same name, or to pass the object as an argument to a member function.

Here is an example of how to use the this pointer in a class method:
```C++
#include <iostream>

class MyClass {
   int x;
public:
   MyClass(int x) : x(x) {}
   void printX() {
      std::cout << this->x << std::endl; // prints the value of the x data member
   }
};

int main() {
   MyClass obj(5);
   obj.printX(); // outputs 5
   return 0;
}
```
- In this example, the `MyClass` class has a single data member `x` and a method `printX`that prints the value of `x` to the console. The `printX` method uses the `this` pointer to access the `x` data member of the object, rather than a local variable named `x`.

You can also use the `this` pointer to pass the object as an argument to another member function. For example:

```C++
#include <iostream>

class MyClass {
   int x;
public:
   MyClass(int x) : x(x) {}
   void setX(int x) { this->x = x; }
   void printX() {
      std::cout << x << std::endl; // prints the value of the x data member
   }
};

int main() {
   MyClass obj(5);
   obj.setX(10);
   obj.printX(); // outputs 10
   return 0;
}
```
- In this example, the setX method sets the value of the x data member using the this pointer. The printX method then prints the updated value of x.

- It's important to note that the this pointer is only available within the body of a non-static member function. It is not available within the body of a static member function, or outside the class.
    
## Initialization list

- the initialization list is a feature that allows you to specify the initial values for the member variables of a class when you create an object of that class. It is typically used in the constructor of the class.
Here is an example of a class with a constructor that uses an initialization list:
```C++
class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y)
    {
        // Body of the constructor
    }
};
```
    
    
- In the above example, the constructor of the `Point` class has two parameters, `x` and `y`, which correspond to the member variables of the same name. The initialization list appears after the colon (`:`) and specifies the initial values for the member variables.

Using an initialization list has several benefits:
    
- 1- Improved performance: Initializing member variables using the initialization list is generally more efficient than assigning values to them in the body of the constructor. This is because the initialization list is executed before the constructor's body, so the member variables are initialized directly rather than being assigned values later on.
    
- 2- Better control over member initialization: The initialization list allows you to specify the order in which member variables are initialized, which can be important if one member variable depends on the value of another.
- 3- Ability to initialize const and reference members: The initialization list is the only way to initialize const and reference member variables. These types of variables cannot be assigned values after they are declared, so they must be initialized in the initialization list.
- 4- Ability to call base class constructors: The initialization list can also be used to call base class constructors and pass arguments to them. This allows you to initialize base class members before the derived class constructor is executed.
    
> **Note**
> It is important to note that the initialization list must always come before the body of the                      constructor. If you try to initialize the member variables in the body of the constructor, the              compiler will give an error.

    
## Benifits of using Setters and Getters!
-In object-oriented programming (OOP), setter and getter functions, also known as "accessor" and "mutator" methods, are used to manage the value of an object's private data members. Setter functions, also called "mutator methods," are used to set the value of a private data member, while getter functions, also called "accessor methods," are used to retrieve the value of a private data member.

Using setters and getters has several benefits:

- Encapsulation: Setters and getters allow you to hide the implementation details of a class from other objects and control how the class' data is accessed and modified. This is known as encapsulation.

- Data validation: Setter functions can be used to perform data validation, ensuring that only valid data is assigned to an object's data members. For example, a setter function for a person's age might only allow ages greater than zero to be set.

- Flexibility: Using setters and getters allows you to change the implementation of a class without affecting the code that uses it. For example, you could change the way an object's data is stored without affecting the code that sets or retrieves the data.

- Code reusability: Setters and getters can be used in multiple classes, which allows you to reuse the same accessor and mutator code in different parts of your program.

Overall, setters and getters are useful tools for implementing encapsulation and data hiding in C++ and other object-oriented programming languages. They allow you to control how objects' data is accessed and modified, which can make your code more robust, flexible, and maintainable.
