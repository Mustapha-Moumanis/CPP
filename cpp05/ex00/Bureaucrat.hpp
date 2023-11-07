/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:31:50 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/07 13:31:17 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public :
		Bureaucrat();
		Bureaucrat(const std::string n, int g);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

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
		int getGrade() const;
		void increment();
		void decrement();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif