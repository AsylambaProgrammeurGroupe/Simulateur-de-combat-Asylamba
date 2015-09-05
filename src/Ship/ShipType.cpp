/*
 * ShipType.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#include "ShipType.h"
using namespace std;

ShipType::ShipType(const std::string& name,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family)
:ShipType(name,family.getName()+":"+name,weapon,defense,speed,maxHull,pev,price,family){
	
}

ShipType::ShipType(const std::string& name,const std::string& idName,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family )
:name(name),weapon(weapon),defense(defense),speed(speed),maxHull(maxHull),pev(pev),price(price),idName(idName),family(family){
	
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
const long int ShipType::getSoute() const{
	return 250*getPev();
}
