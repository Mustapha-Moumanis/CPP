/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:10:50 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/07 21:22:47 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 145, 137)
{
    target = "";
    std::ofstream ofs("_shrubbery");
    if (ofs.is_open())
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n       --       \n"<< std::endl;
    else
		std::cout << "You have a problem if the File : " << std::endl;
    ofs.close();
};

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("PresidentialPardonForm", 145, 137)
{
    target = t;
    // std::cout << getName() << std::endl;
    std::ofstream ofs(t + "_shrubbery");
    if (ofs.is_open())
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⠋⠓⠤⠾⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n      ⢠⠴⠋⠙⣦⠔⢎⡀⠀⠀⠀⠘⠖⠋⠚⠦⡄⠀⠀⠀⠀⠀⠀⠀\n      ⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⠆⠀⠀⠀⠀⠀⠀⠀\n  ⢀⡤⠤⣀⣀⡹⠴⢤        ⢀⣐⡮⠹⠤⣀⢤    ⠀\n⢠⡞⠉  ⠀⠉⠓⠊⠉  ⢀⠀⢀⡔⠉⠉⠉⠉⠒⠁  ⠈⡑    \n⢹⡆      ⠤⣦⡀⢛⡟⢴⣯⡀        ⠀⠑⢻  ⠀\n⠸⡄⢀⡀⠀⣄  ⠀⢀⡹⠼⣣⠠⢉⢹⠣⠦⡖⢀⠶  ⢠⣔⣖⡅⠦⢄⣀\n⠀⠉⠉⠻⢾⣛⢊⠏⠀⡤⠀⡀⣬⠫⠂⡆⢀⢦⠇⡊⠽⡪⠁  ⠉  ⠀⢸\n  ⣠⠶⠚⠈⠉⠀⢌⠆⠉⠀⠘⠖⠙⢇⢠⣤⠗⠒⠒⠃⠉⠁    ⠀⡸\n  ⠸⣤⡄  ⠀⡀    ⣀⡠⠊⠂⡇⢀⣀    ⠀⢰⣖⡒⠃⠀\n    ⠑⠧⠤⠶⠷  ⢈⣫⠁⠘⠀⠔⠉⠁⢟    ⡤⠤⠴⠁  \n        ⠛⠓⠚⠛  ⢆⠀⠰  ⠈⠉⠓⠖⠉      \n              ⢸⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⠀⠘⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"<< std::endl;
    else
		std::cout << "You have a problem if the File : " << std::endl;
    ofs.close();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
