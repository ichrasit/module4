#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
    private:
        Brain* brain;
    public:
        Dog(); // type dog, dog created 
        ~Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        void makeSound() const; // hav hav override

        std::string getIdeas(int index) const;
        void setIdea(int index, const std::string& idea) const;



};


#endif