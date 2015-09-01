/*
 * Squadron.cpp
 *
 *  Created on: 1 sept. 2015
 *      Author:
 */

#include "Squadron.h"
#include "../utility/utility.h"
#include <utility>
const unsigned int Squadron::maxPev(100);


Squadron::Squadron():ships({}),pev(0){
	
}



bool Squadron::addShip(const Ship& ship,const unsigned int& number){
	
	if (pev+number*ship.getPev() <= maxPev and number>0){
		
		for(unsigned int i(0);i<number;++i ){
			Ship shipT (ship); // on s'assure de la copie pour avoir n ship différent 
			
			ships.push_back(shipT);
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
			
			ships.push_back(ship);
		}
		
		pev += number*shipType.getPev();
		return true;
	}
	else{
		return false;
	}
}


bool Squadron::removeShip(const size_t& pos){
	if(pos < ships.size()){
		removeInVectorFromPosNoOrder(ships,pos);
		return true;
	}
	else{
		return false;
	}
}

bool Squadron::removeShip(const ShipType& shipType,const unsigned int& number){
	
	bool finish(false);
	unsigned int j (0);
	
	while (not finish){
		bool find(false);
		size_t i (0);
		
		while (not find and i < ships.size()){
			if (ships[i].getType().getIdName() == shipType.getIdName()){
				find = true;
				removeShip(i);
				++j;
			}
			else{
				++i;
			}
		}
		
		if(not  i < ships.size() or not j >= number){ // si on est à la fin ou si on a enlever number vaisseaux
			finish = true;
		}
	}
	
	return (j == number);
	
}
