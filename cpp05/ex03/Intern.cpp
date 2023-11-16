/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:28:06 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/15 12:07:31 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm *Intern::newPresidForm(std::string t)
{
    std::cout << "Intern creates presidential pardon Form" << std::endl;
    return new PresidentialPardonForm(t);
}

AForm *Intern::newRobotForm(std::string t)
{
    std::cout << "Intern creates robotomy request Form" << std::endl;
    return new RobotomyRequestForm(t);
}

AForm *Intern::newShrubForm(std::string t)
{
    std::cout << "Intern creates shrubbery creation Form" << std::endl;
    return new ShrubberyCreationForm(t);
}

const char *Intern::FormNotFound::what() const throw()
{
    return "Form doesn't exist";
}

AForm *Intern::makeForm(std::string t, std::string n)
{
    allForms tab[3] = {
        {"presidential pardon", &Intern::newPresidForm},
        {"robotomy request", &Intern::newRobotForm},
        {"shrubbery creation", &Intern::newShrubForm}
    };

    for (int i = 0; i < 3; i++)
    {
       if (!tab[i].type.compare(t))
            return (this->*tab[i].pmf)(n);
    }
    throw FormNotFound();
}

