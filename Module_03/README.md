## Table of content

- [Polymorphism](#polymorphism)
- [Inheritance](#inheritance)
- [Access specifier](#access-specifier)

## Polymorphism

In C++, there are two types of polymorphism:

  - Static polymorphism: also known as compile-time polymorphism, refers to the ability of a program to determine the type of an object or function at compile-time, based on the template parameters. It is achieved through templates in C++ (we will talk about it in detailed way in Module_07)
  - Dynamic polymorphism : This type of polymorphism is achieved through `inheritance` and `virtual functions` (we will discuss the concept of virtual functions in the following modules), but what is the Inheritance?

## Inheritance

In C++, inheritance is the process by which a class (called the `subclass` or `derived class` or `child class`) derives the properties and behaviors of another class (called the `superclass` or `base class` or `parent class`). Inheritance allows you to create a new class that is a modified version of an existing class, without having to reimplement all of the code in the new class.

Here is an example of inheritance in C++:

```C++
  class Animal {
   public:
    void makeNoise() {
      cout << "Some generic animal noise" << endl;
    }
  };

  class Dog : public Animal {
   public:
    void makeNoise() {
      cout << "Woof!" << endl;
    }
  };

  int main() {
    Animal a;
    a.makeNoise();  // Outputs: "Some generic animal noise"

    Dog d;
    d.makeNoise();  // Outputs: "Woof!"
    return 0;
  }
```
In this example, the `Animal` class has a `makeNoise` method that outputs a generic animal noise. The `Dog` class is derived from the `Animal` class and has its own version of the `makeNoise` method that outputs a specific dog noise. When we create an instance of the `Dog` class and call the `makeNoise` method on it, the `Dog` class's version of the method is called instead of the `Animal` class's version. This is an example of method overriding, which is a key feature of dynamic polymorphism.

Inheritance has several benefits in C++:
  - It allows you to reuse existing code and avoid duplicating functionality.
  - It allows you to create a hierarchy of classes, where a subclass can inherit the properties and behaviors of its superclass and add its own unique features.
  - It allows you to create a common interface for a group of related classes, which makes it easier to work with these classes in your code.

## Access specifier

In C++, access specifiers are keywords that determine the accessibility of class members (i.e., data members and member functions) from outside the class. There are three access specifiers in C++:

  - 1- `public`: Class members that are declared as public can be accessed from anywhere within the program, both inside and outside the class.
  - 2- `private`: Class members that are declared as private can only be accessed from within the class itself. They are not accessible from outside the class, even by derived classes.
  - 3- `protected` : Class members that are declared as protected can be accessed from within the class and from any derived classes, but they are not accessible from outside the class hierarchy.

![alt text](https://github.com/aoumad/Netpractice/blob/main/images/access_specifiers.png)
