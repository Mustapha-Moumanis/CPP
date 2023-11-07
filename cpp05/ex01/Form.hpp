/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:29:26 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/07 15:52:26 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form 
{
	private:
        const std::string name;
        bool sign;
        const int gradeSign;
        const int gradeExecute;

	public :
		Form();
		Form(std::string n, int gradeS, int gradeE);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
		
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
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif