/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:56:53 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/27 11:34:48 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string arg) {
    if (arg.empty() || (arg.find_first_not_of("0123456789 -*/+") != std::string::npos))
        throw std::invalid_argument("Error");
    this->arg = arg;
}

RPN::RPN(const RPN &other){
	*this = other;
}

RPN &RPN::operator=(const RPN &other) {
    if (this == &other)
        return *this;
    arg = other.arg;
    return *this;
}

RPN::~RPN() {
}

void RPN::Execute() const{
    std::stack<int> stack;
    std::stringstream ss(this->arg);
    std::string check;
    ss >> check;
    while (!check.empty()) {
        if (check.size() != 1)
            throw std::invalid_argument("Error");
        else if (isdigit(check.at(0)))
            stack.push(check.at(0) - '0');
        else {
            if (stack.size() < 2)
                throw std::invalid_argument("Error");
            int var1 = stack.top();
            stack.pop();
            int var2 = stack.top();
            stack.pop();
            stack.push(calcule(var2, var1, check.at(0)));
        }
        check = "";
        ss >> check;
    }
    if (stack.size() != 1)
        throw std::invalid_argument("Error");
    std::cout << stack.top() << std::endl;
}

int RPN::calcule(int var1, int var2, char oprt) const {
    switch (oprt)
    {
    case '+':
        return var1 + var2;
    case '-':
        return var1 - var2;
    case '*':
        return var1 * var2;
    case '/':
        return var1 / var2;
    default:
        throw std::invalid_argument("Error");
    }
}
