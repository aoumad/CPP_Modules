## Table of content
-[Intro to STL containers](#intro-to-stl-containers)
-[STL containers overview](#stl-containers-overview)
-[std::vector](#std::vector)
-[std::list](#std::list)
-[std::map](#std::map)
-[std::stack](#std::stack)
-[Iterators](#iterators)
-[Iterator adapters](#iterator-adapeters)
-[Algorithms](#algorithm)
-[Resources](#resources)

## Intro to STL containers

- A container is a `holder object` that stores a collection of other object (it's elements). They are implemented as `class templates`, which allows a great flexibility in the types supported as elements. The container manages the storage spaces for it's elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).
- The containers library is a collection of templates and algorithms that implement the commo data structures that we work with as programmers. A container is an object that stores a collection of elements (i.e other objects). Each of these containers manages the storage space for their elements and provides access to each element through iterators and/or member functions.
- Containers replicate structures very commonly used in programming: dynamic arrays (`vector`), queues (`queue`), stacks (`stack`), heaps (`priority_queue`), linked lists (`list`), tree (`set`), associative arrays (`map`)...
- Many containers have several member functions in common, and share functionalities. The decision of which type of container to use for a specific need does not generally depend only on the functionality offered by the container, but also on `the efficiency of some of it's members (space and time complexity)`. This is especially true for sequence containers, which offer different trade-offs in complexity between inserting/removing elements and accessing them.

> example

```C++
#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main()
{
  std::list<int> lst1;
  std::map<std::string, IOperation*> map1;
  std::vector<int> v1; // array that contains what we need
  std::vector<int> v2(42, 100);
  
  lst1.push_back(1);
  lst1.push_back(17);
  lst1.push_back(42);
  
  map1["opA"] = new OperationA;
  map1["opB"] = new OperationB;
  
  std::list<int>::const_iterator it; // STL iterator works almost the same way as a pointer
  std::list<int>::const_iterator ite = lst1.end(); // lst1.end is not the last element. It's value that we can compare to that means we are over the last element
  
  for (it = lst1.begin(); it != ite; ++it)
  {
      std::cout << *it << std::endl;
  }
    return (0);
}

> overview of STL

____________________

> abstraction of STL

______________________

## STL containers overview
The standard containers
  - Sequence containers (used for data structures that store objects of the same type in a linear manner)
      * array : a static contiguous array
      * vector : a dynamic contiguous array
      * forward_list : a single-linked list
      * list : a doubly-linked list
      * deque : a double-ended queue, where elements can be added to the front or back of the queue.
  - Container adapter (Not full container classes on their own, but wrappers around other container types. They encapsulate the underlying container type and limit the user interfaces accordingly.)
  - Associative containers









```
