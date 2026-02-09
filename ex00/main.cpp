#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"

#include "WrongCat.hpp"
int main()
{
    Animal* hayvan = new Animal();
    hayvan->getType();
    hayvan->makeSound();

    std::cout << "--------------------" << std::endl;

    Dog* kopek = new Dog(); 

    kopek->getType();
    kopek->makeSound();

    std::cout << "--------------------" << std::endl;

    Cat* kedi = new Cat();
    
    kedi->getType();
    kedi->makeSound();

    std::cout << "--------------------" << std::endl;


    WrongAnimal* yanlis = new WrongAnimal();
    yanlis->getType();
    yanlis->makeSound();

    WrongAnimal* yanliskedi = new WrongCat();
    yanliskedi->getType();
    yanliskedi->makeSound();


    std::cout << "\n---------Test With Not Pointer---------" << std::endl;

    Animal animal;
    animal.getType();
    animal.makeSound();

    std::cout << "--------------------" << std::endl;


    Cat cat;
    cat.getType();
    cat.makeSound();

    std::cout << "--------------------" << std::endl;

    Dog dog;
    dog.getType();
    dog.makeSound();

    std::cout << "--------------------" << std::endl;

    WrongAnimal wrong;
    wrong.getType();
    wrong.makeSound();

    std::cout << "--------------------" << std::endl;

    WrongCat catwrong;
    catwrong.getType();
    catwrong.makeSound();


    std::cout << "--------------------" << std::endl;




}
