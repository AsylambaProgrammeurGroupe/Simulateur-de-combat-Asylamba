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
#include "ShipFamily.h"
#include "../Tech/Tech.h"
class ShipType{
	
private:
	const std::string name;
	
	
	Weapon weapon;
	const double defense;
	const double speed;
	const double maxHull;
	const unsigned int pev; 
	const unsigned int price;
	
	const std::string idName;
	const ShipFamily family;
	//const unsigned long int soute;
	
	static const int SoutePevPev;
	
public:
	
	
	ShipType(const std::string& name ,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family );
	ShipType(const std::string& name,const std::string& idName,const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev,unsigned int price,const ShipFamily& family);

	virtual ~ShipType() = default;
	
	
	Weapon getWeapon() const;
	double getDefense(const Tech& t) const;
	double getSpeed(const Tech& t) const;
	double getDefense() const;
	double getSpeed() const;
	double getMaxHull() const;
	unsigned int getPev() const; 
	unsigned int getPrice() const;
	const long int getSoute() const;
	
	double getAttack(const size_t& pos,const Tech& t = Tech(ShipFamily(""))) const; //!< retourne l'attaque a une position donner le d'larme
	unsigned int getNumberOfAttack(const size_t& pos) const; //!< retourne le nombre d'attaque d'un cannon a un positiopn deonner dans le Wapon

	const std::string& getIdName() const {
		return idName;
	}

	const ShipFamily& getFamily() const {
		return family;
	}

	const std::string& getName() const {
		return name;
	}
};



#endif /* SHIP_SHIPTYPE_H_ */
