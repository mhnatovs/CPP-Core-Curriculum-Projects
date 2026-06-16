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
    AForm* (*ptr)(std::string const&);//pointer to function
};

static AForm* makePresidentalPardon(std::string const& target)
{
    return new PresidentialPardonForm(target);
}
static AForm* makeRobotomy(std::string const& target)
{
    return new RobotomyRequestForm(target);
}
static AForm* makeShrubbery(std::string const& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string const& name, std::string const& target) const
{
    FormEntry forms[] = {
                            {"shrubbery creation", makeShrubbery},
                            {"robotomy request", makeRobotomy},
                            {"presidential pardon", makePresidentalPardon}
                        };
    int n = sizeof(forms) / sizeof(forms[0]);
    for(int i = 0; i < n; i++)
    {
        if (forms[i].name == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i].ptr(target);
        }
    }
    std::cerr << "Intern: form '" << name << "' does not exist\n";
    return (NULL);
}
