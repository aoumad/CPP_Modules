## Table of contents
- [casts in C++](#casts-in-c++)
- [uintptr_t](#vuintptr_t)

## Casts in C++:

Casts in c++ are used to convert one data type to another, there are three types of casts in C++: `static_cast`, `dynamic_cast` and `reinterpret_cast`.

- 1- `static_cast` : This type of cast is used to convert one data type to another, and is typically used for conversation that the compiler can determine at compile-time. For example, converting an `int` to a `float`. the syntax for `static_cast` is:
 > `static_cast<new_type>(expression)`
 
 - 2- `dynamic_cast` : This type of cast is used to perform a type-safe and safe down-casting of polymorphic classes (classes that have at least one virtual function). It checks at runtime if the object being casted is actually of the target type and returns a null pointer or a null reference if the cast is not valid. The syntax for `dynamic_cast` is: 
 > `dynamic_cast<new_type*>(expression)`
 
 - 3- `reinterpret_cast` : This type of cast is used to convert a pointer or object to another without changing the underlying bit pattern. It is typically used for casting between unrelated types, such as between a pointer to an `int` and a pointer to a `float`. The syntax for `reinterpret_cast` is:
 > `reinterpret_cast<new_type>(expression)`
 
 It is important to note that these casts should be used with caution, as they can lead to undefined behavior if used incorrectly. In general, it's best to use the appropriate cast for the specific situation and to make sure that the types being casted are compatible.


## uintptr_t

`uintptr_t` is an unsigned integer type in C++ that is used to represent a pointer value as an integer. It is defined in the `<cstdint>` header and is guaranteed to be large enough to hold any pointer value without loss of precision.

It is typically used to store the memory address of a pointer in a variable, and can be useful in situations where a pointer needs to be passed as an argument to a function that only accepts an integer type.

For example:

```C++
void some_function(int x){...}
int* ptr = new int[10];
uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
some_funtion(addr);
```

In this example, `ptr` is a pointer to an `int` array, and `addr` is a variable of type `uintptr_t` that stores the memory address of `ptr`. The `reinterpret_cast` is used to convert the pointer to `int` array to `uintptr_t` type.

It's also worth noting that it is not safe to perform arithmetic operations on `uintptr_t` variables, as it may not be guaranteed that the resulting value will still be a valid memory address.

In short, `uintptr_t` is an unsigned integer type, defined in the `<cstdint>` header and it's used to represent a pointer value as an integer. it's useful when you need to pass a pointer as an argument to a function that only accepts an integer type, but it's not safe to perform arithmetic operations on it.
