#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    delete j;
    delete i;

    std::cout << "\n---------------------------\n" << std::endl;

    AAnimal* hayvanlar[4];

    for (int k = 0; k < 4; k++)
    {
        if (k % 2 == 0)
            hayvanlar[k] = new Dog();
        else
            hayvanlar[k] = new Cat();
    }

    for (int k = 0; k < 4; k++)
    {
        hayvanlar[k]->makeSound();
        delete hayvanlar[k];
    }

    std::cout << "\n---------------------------\n" << std::endl;

    Dog* kopek = new Dog();
     

    Dog* kopyaKopek = new Dog(*kopek);

    delete kopek;

    std::cout << "Kopya hala yasiyor mu? ";
    kopyaKopek->makeSound();

    delete kopyaKopek;

    std::cout << "\n---------------------------\n" << std::endl;

    AAnimal* rasit = new Dog();
    
    rasit->getType();
    rasit->makeSound();

    delete rasit;


    return 0;
}