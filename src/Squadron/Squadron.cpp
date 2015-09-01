/*
 * Squadron.cpp
 *
 *  Created on: 1 sept. 2015
 *      Author: Bouttefeux
 */

#include "Squadron.h"


const unsigned int Squadron::maxPev(100);


Squadron::Squadron():Ships({}),pev(0){
	
}



bool Squadron::addShip(const Ship& ship,const unsigned int& number){
	
	if (pev+number*ship.getPev() <= maxPev and number>0){
		
		for(unsigned int i(0);i<number;++i ){
			Ship shipT (ship); // on s'assure de la copie pour avoir n ship différent 
			
			Ships.push_back(shipT);
		}
		
		pev += number*ship.getPev();
		return true;
	}
	else{
		return false;
	}
	
}

bool Squadron::addShip(const ShipType& shipType,const unsigned int& number){
	
	
	if (pev+number*shipType.getPev() <= maxPev and number>0){
		
		for(unsigned int i(0);i<number;++i ){
			Ship ship (shipType);
			
			Ships.push_back(ship);
		}
		
		pev += number*shipType.getPev();
		return true;
	}
	else{
		return false;
	}
}
