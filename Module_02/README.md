## Table of content

- [Ad-hoc polymorphism](#ad-hoc-polymorphism)
- [Orthodox Canonical Formo](#orthodox-canonical-form)
- [Copy constructor](#reference-vs-dereference)
- [Copy assignment operator](#copy-assignment-operator)
<!-- - [Constant class instance in another class](#constant-class-instance-in-another-class)
- [Destructor called without a constructor](#destructor-called-without-a-constructor)
- [Streams](#streams)
- [Data transfer modes](#data-transfer-modes)
- [Text mode operations](#text-mode-operations)
- [Advantages of using streams](#advantages-of-using-streams)
- [File streams](#file-streams)
- [Creating file objects](#creating-file-objects) -->

## Ad-hoc polymorphism

In C++, ad-hoc polymorphism refers to the ability of a function or operator to behave differently based on the types of it's arguments. This is also known as overloading.

For example, consider the following code:

```C++
  #include <iostream>

  void  print(int x)
  {
    std::cout << "The value is " << x << std::endl;
  }

  void  print(double x)
  {
    std::cout << "The value is " << x << std::endl;
  }

  int main()
  {
    print(10); // calls the first version of print
    print(3.14); // calls the second version of print
  }
```

- In this code, we have two functions called `print` that take different types of arguments: an `int` and a `double`. When we call `print(10)`, the compiler will select the first version of the function, which takes an `int` as an argument. When we call `print(3.14)`, the compiler will select the second version of the function, which takes a `double` as an argument.

- This is an example of ad-hoc polymorphism because the function `print` exhibits different behavior depending on the type of its argument.

- Ad-hoc polymorphism is implemented in C++ using function overloading, which allows multiple functions to have the same name as long as they have different argument types or a different number of arguments.
> **Note**
> It's important to note that ad-hoc polymorphism is different from parametric polymorphism, which is a type of polymorphism that allows a function or type to be defined independently of the types of its arguments. In C++, parametric polymorphism is implemented using templates.


