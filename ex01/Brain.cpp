#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor Created!" << std::endl; 
}

Brain::Brain(const Brain &other){
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain Copy Constructor Created!" << std::endl;
}

Brain& Brain::operator=(const Brain &other){
    if (this != &other){
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Assignment Operator Created!" << std::endl;
    return *this;   
}

Brain::~Brain(){
    std::cout << "Brain Destroyed!" << std::endl;
}

