## Table of content

- [Ad-hoc polymorphism](#ad-hoc-polymorphism)
- [Orthodox Canonical Form](#orthodox-canonical-form)
- [Operator overload](#operator-overload)
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

## Operator Overload

- Operator overload is a feature in C++ that allows operators (such as `+`, `-`, `*`, `/`) to have different meanings depending on the type of their operands. This is an example of ad-hoc polymorphism that we saw before, as the behavior of the operator changes based on the types of it's operands.

For example, consider the following code:

```C++
   struct Vector2D
   {
     double x, y;
     Vector2D(double x, double y) : x(x), y(y) {}
   };
   Vector2D operator+(const Vector2d& v1, const Vector2D& v2)
   {
      return Vector2D(v1.x + v2.x, v1.y + v2.y);
   }

   int main()
   {
        Vector2D v1(1, 2), v2(3, 4);
      Vector2D v3 = v1 + v2;  // calls the overloaded operator+
      std::cout << "v3.x = " << v3.x << ", v3.y = " << v3.y << std::endl;
      return 0;
   }
```

- In this code, we have defined a struct called `Vector2D` that represents a two-dimensional vector. We have also defined an overloaded version of the `+` operator that takes two `Vector2D` objects as operands and returns a new `Vector2D` object that is the result of adding the two operands.
- When we call `v1 + v2`, the compiler will select the overloaded version of the `+` operator that takes two `Vector2D` objects as operands. This allows us to use the `+` operator to add two-dimensional vectors in a natural way.


## Orthodox Canonical Form

Orthodox canonical form (OCF) is a design pattern used in C++ programming to enforce an object's internal state to be maintained in a consistent and valid state. It is also known as the "Canonical Class" pattern.

The OCF pattern is implemented by following these steps:

- Declare all data members as private, and provide accessor and mutator functions (also known as "getters" and "setters") to manipulate them. This ensures that the object's internal state cannot be directly modified by external code, and can only be modified through the provided functions.

- Declare a default constructor that initializes all data members to their default values. This ensures that all objects are properly initialized when they are created.

- Declare a copy constructor that creates a new object by copying the state of an existing object. This ensures that objects can be safely copied and passed around.

- Declare an assignment operator that assigns the state of one object to another. This ensures that objects can be safely assigned to one another.

- Declare a destructor that properly cleans up any resources used by the object. This ensures that resources are properly released when an object goes out of scope.

- Declare a "swap" function that swaps the state of two objects. This can be useful for implementing efficient copy-and-swap idiom.

- Declare a "validate" function that checks the internal state of the object to ensure it is in a consistent and valid state. This can be useful for debugging and testing.

By following these steps, you can ensure that your objects are well-behaved and maintain a consistent and valid state, which can make your code easier to understand and maintain.

Here is an example of a class that follows the OCF pattern in C++:

```C++
  class Point {
     private:
        int x_;
        int y_;
     public:
        Point();
        Point(int x, int y);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        void swap(Point& other);
        void validate() const;
        int getX() const;
        void setX(int x);
        int getY() const;
        void setY(int y);
  };
```
## Copy constructor

In C++, a copy constructor is a special constructor that is used to create a new object by copying an existing object. It is a member function with the following signature:

```C++
class_name(const class_name& other);
```
> **Note**
> If you saw some blogs write instead of `other` ; `rhs` it stands for `right hand side` :)

The copy constructor takes a reference to an object of the same class as the constructor and creates a new object that is a copy of the original object.

Copy constructor are typically used when an object is passed by value as an argument to a function, or when an object is returned by a function. In these cases, the object needs to be copied in order to preserve it's value and prevent any changes to the original object from affecting the copy.

Here is an example of a class with a copy constructor:
```C++
  class MyClass
  {
    private:
      int _value;
    public:
      // Default constructor
      Myclass(int value) : _value(value) {}

      //Copy constructor
      Myclass(const Myclass& other) : _value(other._value) {}
  }
```

In this example, the `MyClass` class has a single member variable `_value` and a constructor that initializes it with a given value. The copy constructor takes a reference to another `MyClass` object and creates a new object with the same value as the original object.

- Copy constructors are useful in cases where you want to create a new object that is a copy of an existing object, but you don't want to modify the original object. For example, consider the following code:

```C++
  MyClass obj1(10);
  MyClass obj2(obj1); // obj2 is a copy of obj1
```

- In this code, the `obj2` object is created using the copy constructor, which creates a new object with the same value as `obj1`. The original object `obj1` is not modified.
- It's important to note that the copy constructor is only called when an object is copied by value. If an object is passed by reference or pointer, the copy constructor is not called and the original object is used directly.
- By default, C++ provides a default copy constructor for classes that does a member-wise copy of the object's data members. However, you can define your own copy constructor if you need to perform a more complex copy operation, such as deep copying of dynamically allocated memory or resources.
- In the Orthodox Canonical Form (OCF), the copy constructor is used to create a new exception object that is a copy of an existing exception object. This allows exception objects to be passed by value and preserves their state, while still allowing the original object to be modified or destroyed without affecting the copy.
- Any changes you will make in the obj you created using a copy constructor won't obviously affect the original obj ; this is because the copy constructor creates a new object that is a copy of the original object, and the two objects are independent of each other.

