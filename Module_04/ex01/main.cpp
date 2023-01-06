#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


// void    doooi()
// {
//     const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();


//     std::cout << &j << std::endl;
//     std::cout << &i << std::endl;
//     std::cout << &meta << std::endl;

//     delete meta;
//     delete i;
//     delete j;
//     return ;
// }

// int main()
// {
//  doooi();
// system("leaks animals");
// return 0;
// }

int main()
{
    // const Animal* meta = new Animal();
    // // the pointer itself is const not the object it points to
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    // // 
    // delete meta;
    // delete i;
    // delete j;
    // //
    // return 0;
    Cat a;
    Cat b;
    a = b;
    std::cout << a.getType() << "\n";   
}