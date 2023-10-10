/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:55:09 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/10 02:27:19 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::check_level( std::string level )
{
    if (level == "DEBUG")
        return ('D');
    else if (level == "INFO")
        return ('I');
    else if (level == "WARNING")
        return ('W');
    else if (level == "ERROR")
        return ('E');
    else
        return (0);
}

void Harl::complain( std::string level )
{
    int lvl;
    
    lvl = check_level(level);
    switch (lvl)
    {
        case 'D':
            debug();
            break;
        case 'I':
            info();
            break;
        case 'W':
            warning();
            break;
        case 'E':
            error();
            break;
        default: 
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
