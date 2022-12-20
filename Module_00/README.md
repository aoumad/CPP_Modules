## Table of content

- [namespaces](#namespaces)
- [stdio streams](#stdio-streams)
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

I hope this helps! Let me know if you have any questions or if you'd like more information.
