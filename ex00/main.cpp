#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

int main()
{
    std::cout << GREEN << "\n=== TEST 1: CORRECT POLYMORPHISM ===" << RESET << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nCHECKING TYPES:" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "\nCHECKING SOUNDS:" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\nDELETING:" << std::endl;
    delete j;
    delete i;
    delete meta;

    std::cout << GREEN << "\n=== TEST 2: WRONG POLYMORPHISM ===" << RESET << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nCHECKING SOUNDS (SHOULD BE WRONG):" << std::endl;
    wrongMeta->makeSound();
    wrongCat->makeSound();

    std::cout << "\nDELETING:" << std::endl;
    delete wrongMeta;
    delete wrongCat;

    return 0;
}