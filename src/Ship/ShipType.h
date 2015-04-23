/*
 * ShipType.h
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#ifndef SHIP_SHIPTYPE_H_
#define SHIP_SHIPTYPE_H_

#include <string>
#include "../weapon/Weapon.h"

class ShipType{
	
private:
	std::string name;
	
	
	Weapon weapon;
	double defense;
	double speed;
	double maxHull;
	unsigned int pev; 
	unsigned int price;
	
	
	
public:
	
	
	ShipType(const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price );
	virtual ~ShipType() = default;
	
	
	Weapon getWeapon() const;
	double getDefense() const;
	double getSpeed() const;
	double getMaxHull() const;
	unsigned int getPev() const; 
	unsigned int getPrice() const;
	int getSoute() const;
	
};



#endif /* SHIP_SHIPTYPE_H_ */
