## Table of contents
- [Exception classes](#exception-classes)
- [what() function](#what()-function)

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
## what() function

```C++
const char* what() const noexcept { return message_.c_str(); }
```

- The `what()` function is a member function of the `std::exception` class, which is the base class for all exception classes in C++, it returns a C-style string that describes the execption that occured.

- The `const` keyword after the function declaration indicates that the function does not modify the object on which it is called. The `char *` return type means that the function returns a pointer to a null-terminated character array.
- The `noexcept` specifier indicates that the function does not throw any exceptions. This is useful because it allows the compiler to optimize code that uses the function by making certain assumptions about it's behavior.
- In the example code we provided, the `what()` function is overriden in the `MyException` class to return a string that describes the error that occured. The `const char*` return type is used because it is required by the base class, and the `noexcept` specifier is included to indicate that the function does not throw any exceptions.
