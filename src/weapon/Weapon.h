/*
 * Weapon.h
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#ifndef WEAPON_WEAPON_H_
#define WEAPON_WEAPON_H_

#include <vector> // Liador c'est bien mieux que les tableaux à la C
#include "Cannon.h"
#include <initializer_list>


class Weapon: private std::vector<Cannon> { // héritage privé c'est donc un vector mais on masque ses methodes en les passant en privé
	
private:
	
	
	
	
	
public:
	Weapon(std::initializer_list<Cannon> const& liste); // utilisation {c1,c2,c3}
	
	const Cannon operator[](const std::size_t& i)const;
	
	
	
};



#endif /* WEAPON_WEAPON_H_ */
