#include "Animal.hpp"


Animal::Animal() : _type("Animal"){
    std::cout << "Animal Default Constructor Created!" << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Animal Copy Constructor Created!" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "Animal Copy Assignment Operator Created!" << std::endl;
    return *this; 
}

Animal::~Animal(){
    std::cout << "Animal Destroyed!" << std::endl;
}

void    Animal::makeSound() const{
    std::cout << "Animal sounds..." << std::endl;
}

std::string Animal::getType(){
    return _type;
}


