#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    std::cout << "------------------------------------------------" << std::endl;

    const WrongAnimal* yanlis = new WrongAnimal();
    const WrongAnimal* yanlisKedi = new WrongCat();

    yanlis->makeSound();
    yanlisKedi->makeSound();

    delete yanlis;
    delete yanlisKedi;

    std::cout << "------------------------------------------------" << std::endl;

    Dog* kopek = new Dog();
    Dog* kopyaKopek = new Dog(*kopek);

    delete kopek;

    std::cout << "Kopya hala yasiyor mu? ";
    kopyaKopek->makeSound();

    delete kopyaKopek;

    return 0;
}