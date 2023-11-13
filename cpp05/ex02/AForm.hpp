/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:25:19 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/13 20:17:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm 
{
	private:
        const std::string name;
        bool sign;
        const int gradeSign;
        const int gradeExecute;
	public :
		AForm();
		AForm(std::string n, int gradeS, int gradeE);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();
		
		class GradeTooHighException: public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public :
				const char* what() const throw();
		};

		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		void beSigned(Bureaucrat &Bureu);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif