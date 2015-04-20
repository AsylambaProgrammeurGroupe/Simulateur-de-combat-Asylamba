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
	
public:
	
	
	ShipType(const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev );
	virtual ~ShipType() = default;
};



#endif /* SHIP_SHIPTYPE_H_ */
