#include "Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    std::cout << "Dog Default Constructor Created!" << std::endl;
}

Dog::Dog(const Dog &other){
    *this = other;
    std::cout << "Dog Copy Constructor Created!" << std::endl; 
}

Dog& Dog::operator=(const Dog &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "Dog Copy Assignment Operator Created!" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destroyed!" << std::endl;
}

void Dog::makeSound() const{
    std::cout << _type << " says: WOOF WOOF" << std::endl;
}
