#include "Cat.hpp"

Cat::Cat(){
    _type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default Constructor Created!" << std::endl;
}

Cat::Cat(const Cat &other){
    this->_type = other._type;
    this->brain = new Brain();
    *this->brain =  *other.brain;
    std::cout << "Cat Copy Constructor Created!" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
    if(this != &other){
        this->_type = other._type;
        *brain = *other.brain;
    }
    std::cout << "Cat Copy Assignment Operator Created!" << std::endl;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destroyed!" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << _type << " says: MEOW MEOW" << std::endl;
}

void   Cat::setIdea(int index, const std::string& idea) const{
    brain->ideas[index] = idea;
    
}

std::string Cat::getIdeas(int index) const{
    return brain->ideas[index];
}