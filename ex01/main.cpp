#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

int main()
{
    std::cout << GREEN << "\n=== TEST 1: ARRAY OF ANIMALS ===" << RESET << std::endl;
    
    int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\nDELETING ARRAY..." << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << GREEN << "\n=== TEST 2: DEEP COPY CHECK ===" << RESET << std::endl;

    std::cout << "CREATING ORIGINAL DOG..." << std::endl;
    Dog* original = new Dog();
    
    std::cout << "CREATING COPY DOG..." << std::endl;
    Dog* copy = new Dog(*original);

    std::cout << RED << "DELETING ORIGINAL DOG..." << RESET << std::endl;
    delete original;

    std::cout << "CHECKING COPY DOG (SHOULD SURVIVE): " << std::endl;
    copy->makeSound();

    std::cout << "DELETING COPY DOG..." << std::endl;
    delete copy;

    return 0;
}