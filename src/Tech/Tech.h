/*
 * Tech.h
 *
 *  Created on: 8 sept. 2015
 *      Author:
 */

#ifndef TECH_TECH_H_
#define TECH_TECH_H_


#include "../Ship/ShipFamily.h"

class Tech{
	/*! \class Tech
	 *  regroupe les tech pour une famile de vaisseaux
	 */
	
	
private:
	
	double speedMod;
	double attackMod;
	double defenseMod;
	ShipFamily shipFamily;
	
	
public:
	
	double getAttackMod() const {
		return attackMod;
	}
	
	double getDefenseMod() const {
		return defenseMod;
	}
	
	double getSpeedMod() const {
		return speedMod;
	}
	
	Tech(const ShipFamily& s,const double& speedMod=1.0,const double& attackMod=1.0,const double& defenseMod=1.0);

	const ShipFamily& getShipFamily() const {
		return shipFamily;
	}
};



#endif /* TECH_TECH_H_ */
