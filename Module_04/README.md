## Table of contents
- [subtyping polymorphism](#subtyping-polymorphism)
- [virtual functions](#virtual-functions-virtual-keyword)
- [mechanism of vitual functions && vptr && vtable](#mechanism-of-vitual-functions-&&-vptr-&&-vtable)
- [abstract classes](#abstract-classes)
- [polymorphism](#polymorphism)
- [interface & pure virtual functions](#interface--pure-virtual-functions-virtual-keyword---0)
- [shallow vs deep Copies](#shallow-vs-deep-copies)
<!-- - [coplien form](https://github.com/achrafelkhnissi/CPP-Modules/wiki/Module04#coplien-form) -->
- [virtual member function](#virtual-member-function)
- [virtual destructor](#virtual-destructor)
- [label virtual](#label-virtual)

## Subtyping polymorphism

Subtyping polymorphism, also known as dynamic polymorphism or runtime polymorphism, refers to the ability of a program to determine the type of an object at runtime and execute the appropriate method, based on th vtable of the object. It is achieved through inheritance and method overriding in C++.

## Virtual functions

Virtual functions are member functions that can be overriden by derived class. They are declared with the `virtual` keyword in the base class and are defined in the derived class using the same signature as the base class function.

Here is an example of subtype polymorphism and virtaul function using Inheritance in C++:

```C++
  class Animal
  {
     public:
        virtual void makeSound()
        {
          cout << "Some generic animal sound" << endl;
        }
  };

  class Dog : public Animal
  {
     public:
        void makeSound()
        {
          cout << "Woof!" << endl;
        }
  };

  int main()
  {
    Animal *animal = new Animal();
    animal->makeSound();  // Outputs: "Some generic animal sound"

    animal = new Dog();
    animal->makeSound();  // Outputs: "Woof!"

    return 0;
  }
```

In the above example, the `Animal` class has a virtual function called `makeSound()` method that overrides the one in the base class.

When we create an object of type `Animal()` and call the `makeSound()` method , it outputs the generic animal sound. But when we create a `Dog` object and call the same method through a pointer to the base class `Animal`, it outputs the sound specific to a dog, because the derivws class's method is called instead of the base class's method. This is known as dynamic dispatch or runtime polymorphism.

## Mechanism of vitual functions && vptr && vtable

To implement virtual functions, C++ uses a mechanism called `virtual function table`, or `vtable`, and a `virtual function pointer` or `vptr`.

Here's how it works:

  - 1- When a class has at least one virtual function, the compiler creates a vtable for the class. The vtable for the class. The vtable is an array of function pointers, one for each virtual function in the class.
  - 2- The vtable is stored in memory in a predefined location, and it's address is stored in a special pointer called the vptr.
  - 3- The vptr is a hidden member of the class, and it's initialized by the constructor of the class to point to the vtable of the class.
  - 4- When a virtual function is called on a object, the compiler generates code to first look up the function pointer in the vtable and call function through the function pointer.

This means that when a virtual function is called on an object, the function that is actually called is determined at runtime, based on the type of the object. If the object i an instance of the base class, the function in the base class's vtable will be called. If the derived class has overriden the virtual funtion, the function in the base class's vtable will be called.

## Abstract class

In C++, an abstract class is a class that cannot be instantiated on it's own, but can be used as a base class for one or more derived classes. Abstract classes are used to define interfaces or provide a common base class for a set of related classes.

An abstract class is defined in the same way as a regular class, with the exception that at least one of it's member function. A pure virtual function is a function that has no implementation and is represented by the syntax `vitual return-type function-name() = 0`

For example, consider the following abstract class `Shape`:

```C++
  class Shape
  {
    public:
    // Pure virtual function
    virtual double area() = 0;
  };
```

This class has a pure virtual function `area` that returns a `double` value and has no implementation. This means that any class that derives from `Shape` must implement the `area` function.

To derive a class from an abstract class, you use the `:` operator followed by the base class name. For example:

```C++
  class Rectangle : public Shape
  {
     public:
          Rectangle(double width, double height) : width_(width), height_(height) {}

          // Override the pure virtual function from the base class
          double area() override { return width_ * height_; }

     private:
        double width_;
        double height_;
  };
```

In this example, the `Rectangle` class derives from the `Shape` class and implements the `area` function. This allows you to create objects of the `Rectangle` class and use them as if they were `Shape` objects.

It is important to note that you cannot create objects. of an abstract class. This means that you cannot do the following:

```C++
Shape shape; // Error : cannot create object of abstract class
```

However, you can create pointers or references to an abstract class, as long as you do not try to dereference them, for example:

```C++
Shape *shape_ptr = new Rectangle(10, 20); // OK
Shape &shape_ref = *shape_ptr; // OK

double a = shape_ptr->area(); // OK
double b = shape_ref.area(); // OK

delete shape_ptr; // OK
```

In this example, `shape_ptr` and `shape_ref` are pointers and references to the `Shape` class, respectively, but they point to objects of the `Rectangle` class. This allows you to use the `area` function of the `Rectangle` class throught the `shape_ptr` and `shape_ref` variables, even though they are of type `Shape`.
