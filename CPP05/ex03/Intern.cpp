#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const& other)
{
    (void)other;
}

Intern& Intern::operator=(Intern const& other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}


struct FormEntry{
    std::string name;
    AForm* (*create)(std::string const&);//pointer to function
};

static AForm* makeShrubbery(std::string const& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string const& name, std::string const& target) const
{
    FormEntry forms[] = {
                    {"shrubbery request", }
    };
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Intern creates " << name << std::endl;
        return forms[i].create(target);
    }
}
