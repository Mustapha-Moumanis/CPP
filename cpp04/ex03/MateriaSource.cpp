/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:53:43 by mmoumani          #+#    #+#             */
/*   Updated: 2023/11/02 21:39:32 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &other) 
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
		this->materia[i] = other.materia[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
            delete this->materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = m;
			return;
		}
	}
	delete m;
}
        
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == 0)
            break;
        if (this->materia[i]->getType() == type)
            return this->materia[i]->clone();
    }
    return 0;
}