#include "Cat.hpp"

Cat::Cat(){
    _type = "Cat";
    std::cout << "Cat Default Constructor Created!" << std::endl;
}

Cat::Cat(const Cat &other){
    *this = other;
    std::cout << "Cat Copy Constructor Created!" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "Cat Copy Assignment Operator Created!" << std::endl;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destroyed!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << _type << " says: MEOW MEOW" << std::endl;
}
