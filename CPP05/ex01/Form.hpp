/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:27:43 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/05 15:57:40 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

//forward declaration to avoid circular dependency
class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExec;

    public:
        Form(const std::string& name, bool isSigned, const int toSign, const int toExec);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        const std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExec() const;

        void beSigned(Bureaucrat& b);

        class GradeTooHighException : public std::exception {
            public:
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
            const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif