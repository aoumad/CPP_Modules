## Table of content

- [Polymorphism](#polymorphism)
- [Inheritance](#inheritance)

## Polymorphism

In C++, there are two types of polymorphism:

  - Static polymorphism: This type of polymorphism is the one we saw in the previous modules, and is achieved through function overloading, which is the ability of a class to have multiple functions with the same name but different signatures. Function overloading allows you to define multiple versions of a function that can be called with different sets of parameters, and the correct version will be chosen based on the number and type of arguments passed to the function.
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
