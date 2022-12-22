## Table of content

- [New and delete](#new-and-delete)
- [Stack vs heap memory](#stack-vs-heap-memory)
- [Reference vs dereference](#reference-vs-dereference)
- [Lifetime and scope](#lifetime-and-scope)
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
  
## Reference vs dereference
In C++, references and pointers are both used to refer to the memory address of a variable, but they have some key differences that you should be aware of.
 ### References
 - A reference in C++ is a way to refer to the memory address of a variable without using a pointer. You can create a reference by using the `&` operator to get the address of a variable, and then using the `&` operator again to create a reference to that address.
 
 Here is an example of how to create a reference in C++:
 ```C++
int x = 5;
int&y = x;
 ```
 
 - In this example, the `y` reference is created to refer to the memory address of the `x` variable. That means any changes made to the `y` reference will be reflected in the `x` variable, because they both refer to the same memory address.
 - References are often used as function parameters to pass variables by reference, rather than by value. This allows you to modify the original variable within the function, rather than creating a copy of the variable and modifying the copy.
 
 Here is an example of a function that uses a reference parameter:
 ```C++
 void increment(int& number) {
  number++;
    }
 ```

In this example, the `increment()` function takes a reference to an integer as a parameter, When the function is called, it increments the value of the integer by 1. Because the parameter is a reference, any changes made to the parameter within the function are reflected in the original variable.

### Pointers
 A pointer in C++ is a variable that stores the memory address of another variable.
 - You can create a pointer by using the `*` operator to declare a pointer variable, and the using the `&` operator to get the addresss of a variable.
 
 Here is an example of how to create a pointer in C++:
 
 ```C++
 int x = 5;
 int *p = &x;
 ```
 In this example, the `p` pointer is created to store the memory address of the `x` variable. You can use the dereference operator `*` to access the value stored at the memory address pointed to - by the pointer.
 - Pointers are often used to dynamically allocate memory on the heap, using the `neew` and `delete` operators. They are also often used to pass variables by reference, similar to references.
 
 Here is an example of a function that uses a pointer parameter:
 ```C++
 void   increment(int   *number)
    (*number)++;
 ```
 In this example the `increment()` function takes a pointer to an integer as a parameter. When the function is called, it increments the value of the integer by 1 using the dereference operator `*`.
 
 ### Key Differences
 
 There are many differences between references and pointers that you should be aware of:
    - References must be initialized when they are created, and they cannot be changed to refer to a different memory address after they are created. Pointers, on the other hand, ca be initialized later and can be changed to refer to a different memory address using the assignement operator `=`.
    - References are generally easier to use and less error-prone than pointers, because you do not have to worry about allocating and deallocating memory or about the possibility of a null pointer. Pointers, on the other hand, require more careful management and can be a source of bugs if they are not used correctly.
    - References are safer to use than pointers, because they cannot be null a. Pointers, on the other hand, can be null and can be changed to refer to a different memory address, which can lead to bugs if the pointer is not properly initialized or if the pointer is not checked for null before it is derefenced.
    - References are often more efficient than pointers, because they do not require the extra level of indirection involved in derefencing a pointer. However, this difference in efficiency is usually small and is not usually a significant factor in most programs.
    - References cannot be used to refer to an array of elements, because an array decays into a pointer to it's first element when it is passed as an argument to a function. Pointers, on the other hand, can be used to refer to an array of elements or to perform pointer arithmetic.
    
    In general, you should use references when you want to pass a variable by reference or when you want to refer to an object without using a pointer. You should use pointers when you need to dynamically allocate memory on the heap or when you need to perform pointer arithmetic.

## Lifetime and Scope

In C++, the lifetime of a variable or object refers to the period of time during which the variable or object exists in memory. The lifetime of a variable or object can be affected by the storage duration and the scope of the variable or object.

### Storage Duration
 The storage duration of a variable or object determines how long the variable or object persists in memory. There are three storage durations in C++, `static`, `automatic`, `dynamic`.
 ### Static storage duration : 
 Variables and objects with static storage duration are created at the begining of the program and persist until the end of the program. They are also initialized before main is called.
 
 You can create a variable with a static storage duration by using the `static` keyword:
 ```C++
 static int x = 5;
 ```
 
 In this example, the `x` variable is created with static storage duration and is initialized to 5. The `x` variable will persist in memory for the entire lifetime of the program.
 
 ### Automatic Storage Duration :
 Variables and objects with automatic storage duration are created when they are encountered in the program and are destroyed when they go out of scope. Automatic storage duration is the default storage duration for variables and objects in C++.
 
 You can create a variable with automatic storage duration by simply declaring the variable without using the `static` keyword:
 ```C++
 int x = 5;
 ```
 
 In this example, the `x` variable is created with automatic storage duration and is initialized to 5. The `x` variable will be created when it is encountered in the program and will be destroyed when it goes out of scope.
 
 ### Dynamic Storage Duration :
 
 Variables and objects with dynamic storage duration are created at runtime using the `new` operator and are destroyed using the `delete` operator
 
 You can create a variable with dynamic storage duration by using the `new` operator:
 ```C++
 int *p = new int;
 *p = 5;
 ```
 
 In this example, the `p` pointer is created with dynamic storage duration and is initialized to point to a dynamically allocated integer with the value 5. The dynamically allocated integer will persist in memory until it is deallocated using the `delete` operator.

### Scope

The scope of a variable or object determines where the variable or object is visible in the program. There are three types of scope in C++ : `global`, `local` and `class`
    - Global scope : Variables and objects with global scope are visible throughout the entire program. You can create a global variable or object by declaring it outside of any function of class.
    - Local scope: Variables and objects with local scope are visible only within the block of code in which they are defined. You can create a local variable or object by declaring it within a function or block of code.
    - Class scope: Variables and objects with class scope are visible only within the class in which they are defined. You can create a class vairbale or object by declaring it within the class definition.
