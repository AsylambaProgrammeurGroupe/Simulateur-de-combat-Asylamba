/*
 * Ship.h
 *
 *  Created on: 1 sept. 2015
 *      Author:
 */

#ifndef SHIP_SHIP_H_
#define SHIP_SHIP_H_

#include "ShipType.h"

class Ship{
	
private:
	
	ShipType type;
	double hull;
	
	
	
	
public:
	
	Ship(ShipType type); 
	Ship(const Ship& ship) = default;
	virtual ~Ship() = default;
	Weapon getWeapon() const;
	double getDefense(const Tech& t) const;
	double getSpeed(const Tech& t) const;
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
	
	const std::string& getIdName() const {
		return type.getIdName();
	}

	const ShipFamily& getFamily() const {
		return type.getFamily();
	}

	const std::string& getName() const {
		return type.getName();
	}
	
	//! retourne l'attaque a une position donner le d'larme
	double getAttack(const size_t& pos,const Tech& t = Tech(ShipFamily(""))) const{ 
		return type.getAttack(pos,t);
	}
	//! retourne le nombre d'attaque d'un cannon a un positiopn deonner dans le Wapon
	unsigned int getNumberOfAttack(const size_t& pos) const{
		return type.getNumberOfAttack(pos);
	}

	
	
};



#endif /* SHIP_SHIP_H_ */
