/*
 * ShipType.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#include "ShipType.h"
using namespace std;

ShipType::ShipType(const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price )
:weapon(weapon),defense(defense),speed(speed),maxHull(maxHull),pev(pev),price(price){
	
}

Weapon ShipType::getWeapon() const{
	return weapon;
}
double ShipType::getDefense() const{
	return defense;
}
double ShipType::getSpeed() const{
	return speed;
}
double ShipType::getMaxHull() const{
	return maxHull;
}
unsigned int ShipType::getPev() const{
	return pev;
}
unsigned int ShipType::getPrice() const{
	return price;
}
int ShipType::getSoute() const{
	return 250*getPev();
}
