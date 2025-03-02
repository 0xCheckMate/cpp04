#include "Brain.hpp"
Brain::Brain(void)
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "RandomIdeas";
        i++;
    }
    std::cout << "brain default constructor has been called" << std::endl;
}


Brain::Brain(Brain &copy)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
    std::cout << "brain copy constructor has been called"<< std::endl;
}

Brain &Brain::operator=(const Brain &original)
{
    if (this !=&original)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = original.ideas[i];
            i++;
        }
    }
    std::cout << "copy assignment operator has been called" << std::endl;
    return (*this);
}

void Brain::setIdeas(std::string idea)
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = idea;
        i++;
    }
}

std::string Brain::getIdeas(int index)
{
    if (index > 0 && index < 100)
    {
        return (ideas[index]);
    }
    std::cout << "invalid getidea index" << std::endl;
    return ("");
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor has been called" << std::endl;
}