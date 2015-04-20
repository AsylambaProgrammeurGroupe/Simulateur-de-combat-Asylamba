/*
 * Weapon.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */


#include "Weapon.h"

using namespace std;

Weapon::Weapon(initializer_list<Cannon> const& liste):vector<Cannon>(liste){
	
}

const Cannon Weapon::operator[](const size_t& i)const{
	return (*this)[i];
}
