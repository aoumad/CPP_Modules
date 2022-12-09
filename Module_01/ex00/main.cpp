#include "Zombie.hpp"

int main(void)
{
    std::string stack_name;
    std::string heap_name;
    std::string rand_name;
    std::cout << "The witcher 🧙 is willing to create a zombie in stack and wants you to give him a name!!" << std::endl;
    std::cout << "The name of the stack zombie 🧟‍♂️: ";
    std::cin >> stack_name;

    std::cout << "Now the witcher 🧙 is willing to create a zombie in heap and wants you to give him a name!!" << std::endl;
    std::cout << "The name of the heap zombie 🧟‍♀️: ";
    std::cin >> heap_name;

    Zombie zombie_stack;
    zombie_stack.name_setter(stack_name);
    
    Zombie *zombie_heap = newZombie(heap_name);
    zombie_heap->announce();
    delete zombie_heap;

    std::cout << "Now the witcher 🧙 wants to call a randomChump function" << std::endl;
    std::cout << "And as usual he wants you to give him a name: ";
    std::cin >> rand_name;
    randomChump(rand_name);
    return (0);
}