#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    protected:
        std::string _type;
    public:
        Animal(); // type animal olacak animal created yazdiracak
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);

        virtual ~Animal(); // Animal destroyed bastiricak

        virtual void makeSound() const; // Animal sounds bastiracak

        std::string getType()  const; // type dondurecek
        
};


#endif