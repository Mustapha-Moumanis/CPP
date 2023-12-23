/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:56:51 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/20 18:37:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    private:
        std::stack<int> stack;
    public:
        RPN();
        RPN(std::string arg);
        ~RPN();

    int calcule(int var1, int var2, char oprt);
};

#endif