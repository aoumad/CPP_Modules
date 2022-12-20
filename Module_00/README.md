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
