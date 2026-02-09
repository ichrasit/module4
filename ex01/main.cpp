#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    Animal* hayvan = new Animal();
    hayvan->getType();
    hayvan->makeSound();
    delete hayvan;

    std::cout << "\n---------------------------\n" << std::endl;

    Animal* hayvan1 = new Dog();
    hayvan1->getType();
    hayvan1->makeSound();
    delete hayvan1;
    std::cout << "\n---------------------------\n" << std::endl;
    
    Animal* hayvan2 = new Cat();
    hayvan2->getType();
    hayvan2->makeSound();

    delete hayvan2;
    
    std::cout << "\n---------------------------\n" << std::endl;

    Animal* beyin = new Dog();
    
    Dog dog;
    dog.setIdea(0, "Rasit");

    std::cout << dog.getIdeas(0) << std::endl; 

    beyin->getType();
    beyin->makeSound();
    delete beyin;
    std::cout << "\n---------------------------\n" << std::endl;
    

    Cat cat;
    cat.setIdea(0, "Hello");
    std::cout << cat.getIdeas(0) << std::endl;

    std::cout << "\n---------------------------\n" << std::endl;





    std::cout << "\n---------------------------\n" << std::endl;



}