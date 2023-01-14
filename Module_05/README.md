## Table of contents
- [Exception classes](#exception-classes)
- [try block](#try-block)
- [catch block](#catch-block)
- [throw block](#throw-block)
- [what() function](#what()-function)
- [forward declaration](#forward-declaration)

## Exception classes

In C++, exception classes are used to represent errors that may occur during the execution of a program. An exception is thrown when an error occurs, and it can be caught and handled by a `try-catch block`.

Here is an example of how to create an exception class in C++:

```C++
#include <exception>
#include <string>

class MyException: public std::exception
{
  public:
      MyException(const std::string &message) : _message(message0 {}
      const char * what() const noexcept
      {
        return (_message.c_str());
      }
  private:
    std::string _message;
}
```

To throw an exception of this class in general, you can use the `throw` keyword, like this:

```C++
throw myException("An error occurred")
```

> in our module they tell us what kind of messages we should throw, based on it you will write the appropriate message 

To catch an exception, you can use a try-catch block:


```C++
try
{
  // code that may throw an exception
}
catch
{
  // handle the exception
}
```

## Try block

A `try` block is used to enclose a sectio of code that may throw an exception. if an exception is thrown within the try block, the program will immediately jump to the corresponding `catch` block that can handle that type of exception.

## catch block

A `catch` block is used to handle exception that was thrown within a try block. It takes an argument, which is the type of exception that it can handle, and it is executed when the exception is thrown.

## Throw block

The `Throw` statement is used to throw an exception. It is typically used within a fucntion to indicate that an error can occured. When a throw statement is executed, the program will jump immediately jump out of the current function and look for a catch block that can handle the exception.

When an exception is thrown the program immediately exits the current function and unwinds the call stack until it finds a catch block that can handle the exception. If the program does not find any catch block that can handle the exception, it will call the `std::terminate()` function which will immediately terminate the program and will lead to an abnormal program termination.

The main advantage of using `try-catch` is that it allows the program to handle exceptions in a structured and predictable way, rather than having to rely on undefined behavior or return error codes.
## what() function

```C++
const char* what() const noexcept { return message_.c_str(); }
```

- The `what()` function is a member function of the `std::exception` class, which is the base class for all exception classes in C++, it returns a C-style string that describes the execption that occured.

- The `const` keyword after the function declaration indicates that the function does not modify the object on which it is called. The `char *` return type means that the function returns a pointer to a null-terminated character array.
- The `noexcept` specifier indicates that the function does not throw any exceptions. This is useful because it allows the compiler to optimize code that uses the function by making certain assumptions about it's behavior.
- In the example code we provided, the `what()` function is overriden in the `MyException` class to return a string that describes the error that occured. The `const char*` return type is used because it is required by the base class, and the `noexcept` specifier is included to indicate that the function does not throw any exceptions.

## Forward declaration

A forward declaration in C++ is a way to tell the compiler that a certain identifier (e.g a class, struct, or function) will be used in the future, but it's complete definition is not yet available. This allows you to use the identifier in places where the complete definition is not necessary, such as function prototypes or pointers or references to the identifier.

> When to use forward declaration:

- 1. When you have a circular dependencies between headers.
- 2. When you want to reduce compilation time and dependencies.
- 3. When you only need to use a pointer or referenceto a class, struct, or function and don't need to know it's full definition.

> When not to use forward declaration:

- 1- When you need to use the full definition of a class, struct or a function, such as when you need to call member function or access a member variable.
- 2. When you are defining the class, struct, or function in the same file.

When you use a forward declaration, it is important to make sure that the actual definition of the identifier is available before it is used, as the compiler will not know the full details of the identifier.

In summary, forward declaration is a way to inform the compiler that a certain identifier is going to be used in the future, but it's definition is not available right now. It can be used to reduce compilation time and dependencies, but it is important to make sure that the actual definition of the identifier is available before it is used.
