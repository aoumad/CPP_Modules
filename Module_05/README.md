## Table of contents
- [Exception classes](#exception-classes)

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

```
