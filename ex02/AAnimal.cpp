#include "AAnimal.hpp"


AAnimal::AAnimal() : _type("Animal"){
    std::cout << "AAnimal Default Constructor Created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other){
    std::cout << "AAnimal Copy Constructor Created!" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "AAnimal Copy Assignment Operator Created!" << std::endl;
    return *this; 
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destroyed!" << std::endl;
}

void    AAnimal::makeSound() const{
    std::cout << "AAnimal sounds..." << std::endl;
}

std::string AAnimal::getType() const{ 
    return _type;
}


