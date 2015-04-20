/*
 * ShipType.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#include "ShipType.h"
using namespace std;

ShipType::ShipType(const Weapon& weapon,const double& defense,const double& speed,const double& maxHull,const unsigned int& pev )
:weapon(weapon),defense(defense),speed(speed),maxHull(maxHull),pev(pev){
	
}
