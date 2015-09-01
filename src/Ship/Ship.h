/*
 * Ship.h
 *
 *  Created on: 1 sept. 2015
 *      Author: Bouttefeux
 */

#ifndef SHIP_SHIP_H_
#define SHIP_SHIP_H_

#include "ShipType.h"

class Ship{
	
private:
	
	ShipType type;
	double hull;
	
	
	
	
public:
	
	virtual ~Ship() = default;
	Weapon getWeapon() const;
	double getDefense() const;
	double getSpeed() const;
	double getMaxHull() const;
	unsigned int getPev() const; 
	unsigned int getPrice() const;
	int getSoute() const;

	double getHull() const {
		return hull;
	}

	const ShipType& getType() const {
		return type;
	}
};



#endif /* SHIP_SHIP_H_ */
