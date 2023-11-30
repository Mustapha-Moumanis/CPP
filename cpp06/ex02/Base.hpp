/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:32:17 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/20 10:52:53 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base {
    public :
        virtual ~Base();
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);                                                       

# endif