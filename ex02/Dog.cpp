#include "Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default Constructor Created!" << std::endl;
}

Dog::Dog(const Dog &other){

    this->_type = other._type;
    this->brain = new Brain();
    *this->brain = *other.brain;
    std::cout << "Dog Copy Constructor Created!" << std::endl; 
}

Dog& Dog::operator=(const Dog &other){
    if(this != &other){
        AAnimal::operator=(other);
        delete this->brain;
        this->brain = new Brain();
        *this->brain = *other.brain;
    }
    std::cout << "Dog Copy Assignment Operator Created!" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destroyed!" << std::endl;
    delete brain;
}

void Dog::makeSound() const{
    std::cout << _type << " says: WOOF WOOF" << std::endl;
}

void   Dog::setIdea(int index, const std::string& idea) const{
    brain->ideas[index] = idea;
    
}

std::string Dog::getIdeas(int index) const{
    return brain->ideas[index];
}