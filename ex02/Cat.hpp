#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
    private:
        Brain* brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &toher);

        void makeSound() const;
        std::string getIdeas(int index) const;
        void setIdea(int index, const std::string& idea) const;
        
        
};


#endif