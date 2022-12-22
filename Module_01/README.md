## Table of content

- [New and delete](#new-and-delete)
- [Stack vs heap memory](#stack-vs-heap-memory)
- [Pointers](#pointers)
- [References](#references)
- [Lifetime](h#lifetime)
- [Scope](#scope)
- [Constant class instance in another class](#constant-class-instance-in-another-class)
- [Destructor called without a constructor](#destructor-called-without-a-constructor)
- [Streams](#streams)
- [Data transfer modes](#data-transfer-modes)
- [Text mode operations](#text-mode-operations)
- [Advantages of using streams](#advantages-of-using-streams)
- [File streams](#file-streams)
- [Creating file objects](#creating-file-objects)

##  New and delete

- Malloc() and free() are not specific to C++ and can be used in C++ programs just as they can be used in C programs. However, C++ provides alternative ways to allocate and deallocate memory that may be more convenient and safer to use in some cases.
- One difference between malloc() and free() and the C++ alternatives is that malloc() and free() operate on raw memory, while the C++ alternatives often provide additional functionality, such as constructors and destructors for objects.
- In C++, you can use the `new` and `delete` operators to dynamically allocate and deallocate memory for objects. These operators call constructors and destructors for the objects as needed, which can make it easier to manage the lifetime of objects and avoid memory leaks.

For example, to dynamically allocate memory for an object in C++, you can use the `new` operator like this:
```C++
#include <iostream>

class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
    }
};

int main()
{
    MyClass* p = new MyClass;
    delete p;
    return 0;
}
```
- This code will output "Constructor called" when the object is created and "Destructor called" when it is deleted.

## Stack vs heap memory

In C++, the stack and the heap are two regions of memory where data can be stored and accessed during the execution of a program.
- The stack is a region of memory that is used to store local variables and function call data. When a function is called, a block of memory is reserved on the stack for the function's local variables and any temporary data that the function needs. When the function returns, this block of memory is freed and the stack pointer is adjusted accordingly.
- The heap is a region of memory that is dynamically allocated at runtime and is not automatically deallocated when a function returns. Objects and data that are stored on the heap are usually accessed via pointers, and it is the responsibility of the programmer to deallocate the memory when it is no longer needed.

There are several key differences between the stack and the heap:

  - Lifetime: The lifetime of an object on the stack is limited to the duration of the function in which it is declared. Objects on the heap have a longer lifetime and are typically deallocated when they are no longer needed or when the program terminates.

  - Access: Objects on the stack are accessed directly, while objects on the heap are accessed through pointers.

  - Allocation: Memory on the stack is automatically allocated and deallocated by the system, while memory on the heap must be dynamically allocated and deallocated by the program.

  - Speed: Accessing and manipulating data on the stack is generally faster than accessing and manipulating data on the heap, because the stack is managed by the system and the memory is contiguous. The heap, on the other hand, is managed by the program and may contain fragments of unused memory.
