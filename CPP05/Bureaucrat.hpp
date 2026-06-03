/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:12:39 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/03 17:59:29 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat {
    private:
        const std::string   _name;
        int        _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        const std::string&  getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

    class GradeTooHighException : public std::exception {
            public:
        };

    class GradeTooLowException : public std::exception {
            public:
        };

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
// either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException



#endif