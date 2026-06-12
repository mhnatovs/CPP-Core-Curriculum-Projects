/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:27:43 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/06/11 14:03:31 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExec;

    public:
        AForm(const std::string& name, const int toSign, const int toExec);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

        const std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExec() const;

        void beSigned(Bureaucrat& b);
        /* The = 0 makes it a pure virtual function. This means AForm doesn't know how to execute, 
        so it forces any "concrete" child class to implement the method. */
        virtual void execute(Bureaucrat const & executor) const = 0;
        void checkExecution(Bureaucrat const& executor) const;

        class GradeTooHighException : public std::exception {
            public:
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
            const char* what() const throw();
        };

        class GradeNotHighEnoughException : public std::exception {
            public:
            const char* what() const throw();
        };

        class NotSignedException :public std::exception {
            public:
            const char* what() const throw();
        };

        class GradeNotHighEnoughExceptionToExecute : public std::exception {
            public:
            const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif