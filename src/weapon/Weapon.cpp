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

Weapon::Weapon(const std::vector<Cannon>& vect):vector<Cannon>(vect){
	
}

const Cannon Weapon::operator[](const size_t& i)const{
	return (*this)[i];
}


std::size_t Weapon::size() const{
	return this->vector::size();
}
