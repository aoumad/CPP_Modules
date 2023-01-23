## Templates in C++

C++ templates are powerful feature that allows for the creation of generic functions and classes. This means that the same code can be reused for different types of data, without the need for explicit type casting or overloading.

### Function Templates

Function templates are used to create generic functions that can work with multiple type of data. For example, the following function template will swap the values of two variables, regardless of their type:

```C++
template <typename T>
void  swap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
}
```

This function can be called with any type of variable, such as integers, floats, or custom classes.

```C++
int x = 5;
int y = 10;

swap(x, y) // x is now 10 and y is now 5

std::string a = "hello";
std::string b = "world"

swap(a, b); // a is now holds string "world" and b holds the string "hello" after swaping them
```

### Class Templates

Class templates are used to creat generic classes that can work with multiple types of data. For example, the following class template will create a simple stack that can hold any type of data:

```C++
  template <typename T>
  class Stack
  {
      private:
        vector<T> items;
      public:
        void  push(T item)
        {
            items.push_back(item);
        }
        T pop()
        {
            T item = items.back();
            items.pop_back();
            return item;
        }
  };
```
This class can be instantiated with any type of variable, such as integers, floats, or custom classes.

```C++
  Stack<int> intStack;
  intStack.push(5);
  intStack.push(10);
  int x = intStack.pop(); // x is now 10
  int y = intStack.pop(); // y is now 5

  Stack<string> stringStack;
  stringStack.push("hello");
  stringStack.push("world");
  string a = stringStack.pop(); // a is now "world"
  string b = stringStack.pop(); // b is now "hello"
```

### Template Specialization

It's also possible to provide a specific implementation of a template for a certain type. This is called template specialization.

```C++
  template<typename T>
  class Stack
  {
    // do something
  }
  
  template<>
  class Stack<bool>
  {
     private:
        vector<bool> items'
     public:
        void  push(bool item)
        {
          item.push_back(item);
        }
        bool pop()
        {
            bool item = items.back();
            item.pop_back();
            return item;
        }
  };
```

With this, the stack of booleans will use the specialized implementation, while the stack of other types will use the general one.
