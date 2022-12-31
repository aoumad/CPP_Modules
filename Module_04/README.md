## Table of contents
- [subtyping polymorphism](#subtyping-polymorphism)
- [Subtyping polymorphism vs overriding methode](#subtyping-polymorphism-vs-overriding-methode)
- [abstract classes](#abstract-classes)
- [polymorphism](#polymorphism)
- [virtual functions](#virtual-functions-virtual-keyword)
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
