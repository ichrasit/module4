#include "WrongCat.hpp"

WrongCat::WrongCat() { 
    _type = "WrongCat";
    std::cout << "WrongCat Default Constructor Created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    *this = other;
    std::cout << "WrongCat Copy Constructor Created!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
    if(this != &other)
        this->_type = other._type;
    std::cout << "WrongCat Copy Assignment Operator Created!" << std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destroyed!" << std::endl;
}

void WrongCat::makeSound(){
    std::cout << _type << " cannot say anything because it does not speak!" << std::endl;
}
