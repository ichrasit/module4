#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

int main()
{
    std::cout << GREEN << "\n=== TEST 1: ABSTRACT CLASS TEST ===" << RESET << std::endl;
    std::cout << "I CANNOT CREATE AANIMAL. SO I CREATE DOG AND CAT." << std::endl;

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "\nCHECKING SOUNDS:" << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << GREEN << "\n=== TEST 2: DEEP COPY TEST ===" << RESET << std::endl;

    std::cout << "CREATING ORIGINAL DOG..." << std::endl;
    Dog* dog1 = new Dog();
    
    std::cout << "CREATING COPY DOG..." << std::endl;
    Dog* dog2 = new Dog(*dog1);

    std::cout << RED << "DELETING ORIGINAL DOG..." << RESET << std::endl;
    delete dog1;

    std::cout << "IS COPY STILL ALIVE? SPEAK COPY!" << std::endl;
    dog2->makeSound();

    std::cout << "DELETING COPY..." << std::endl;
    delete dog2;

    return 0;
}