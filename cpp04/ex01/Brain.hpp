/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:31:16 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/30 22:00:05 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain 
{
    public :    
        std::string ideas[100];

        Brain();
		Brain(Brain &other);
		Brain &operator = (const Brain &other);
		~Brain();
};

# endif