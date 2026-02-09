#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    _type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
    std::cout << "WrongAnimal Copy Constructor Created!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "WrongAnimal Copy Assignment Operator Created!" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destroyed!" << std::endl;
}

void WrongAnimal::makeSound(){
    std::cout << _type << " says: I am WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(){
    return _type;
}
