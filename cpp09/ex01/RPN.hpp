/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:56:51 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/27 11:15:14 by mmoumani         ###   ########.fr       */
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
        std::string arg;
    public:
        RPN();
        RPN(std::string arg);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();

        void Execute() const;
        int calcule(int var1, int var2, char oprt) const;
};

#endif