/*
 * ShipType.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#include "ShipType.h"
using namespace std;


const int ShipType::SoutePevPev(250);


ShipType::ShipType(const std::string& name,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family)
:ShipType(name,family.getName()+":"+name,weapon,defense,speed,maxHull,pev,price,family){
	
}

ShipType::ShipType(const std::string& name,const std::string& idName,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family )
:name(name),weapon(weapon),defense(defense),speed(speed),maxHull(maxHull),pev(pev),price(price),idName(idName),family(family){
	
}


Weapon ShipType::getWeapon() const{
	return weapon;
}
double ShipType::getDefense(const Tech& t) const{
	return defense *t.getDefenseMod();
}
double ShipType::getSpeed(const Tech& t) const{
	return speed *t.getSpeedMod();
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
	return SoutePevPev*getPev();
}
double ShipType::getDefense() const{
	return defense;
}
double ShipType::getSpeed() const{
	return speed;
}

double ShipType::getAttack(const size_t& pos,const Tech& t) const{ //! retourne l'attaque a une position donner le d'larme
	double returnVal;
	
	if(pos < getWeapon().size()){
		returnVal= getWeapon()[pos].getAttak()*t.getAttackMod();
	}
	else{
		//throw ?
		returnVal =0.0;
	}
	
	
	return returnVal;
}

unsigned int ShipType::getNumberOfAttack(const size_t& pos) const{
	double returnVal;
	
	if(pos < getWeapon().size()){
		returnVal= getWeapon()[pos].getNumberOfShot();
	}
	else{
		//throw ?
		returnVal =0;
	}
	
	
	return returnVal;
}


