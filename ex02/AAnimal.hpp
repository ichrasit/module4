#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{
    protected:
        std::string _type;
    public:
        AAnimal(); // type animal olacak animal created yazdiracak
        AAnimal(const AAnimal &other);
        AAnimal& operator=(const AAnimal &other);

        virtual ~AAnimal(); // Animal destroyed bastiricak

        virtual void makeSound() const = 0; // Animal sounds bastiracak

        std::string getType() const; // type dondurecek
        
};


#endif