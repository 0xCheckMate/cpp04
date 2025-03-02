#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain &copy);
        Brain &operator=(const Brain &original);
        ~Brain();
        void setIdeas(std::string idea);
        std::string getIdeas(int index);
};

#endif