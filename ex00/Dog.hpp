#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog(); // type dog, dog created 
        ~Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        void makeSound() const; // hav hav override



};


#endif