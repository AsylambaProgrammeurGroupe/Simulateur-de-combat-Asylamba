/*
 * Ship.cpp
 *
 *  Created on: 1 sept. 2015
 *      Author: Bouttefeux
 */

#include "Ship.h"




Weapon Ship::getWeapon() const{
	return type.getWeapon();
}
double Ship::getDefense() const{
	return type.getDefense();
}
double Ship::getSpeed() const{
	return type.getSpeed();
}
double Ship::getMaxHull() const{
	return type.getMaxHull();

}
unsigned int Ship::getPev() const{
	return type.getPev();

} 
unsigned int Ship::getPrice() const{
	return type.getPrice();

}
int Ship::getSoute() const{
	return type.getSoute();
	
}


