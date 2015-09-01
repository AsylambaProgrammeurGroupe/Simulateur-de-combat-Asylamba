/*
 * Squadron.h
 *
 *  Created on: 1 sept. 2015
 *      Author: Bouttefeux
 */

#ifndef SQUADRON_SQUADRON_H_
#define SQUADRON_SQUADRON_H_

#include "../Ship/Ship.h"



class Squadron{
	/*! \class Squadron
	 * gère les escadrilles
	 */
	
private:
	
	std::vector<Ship> Ships; //!< les vaisseaux
	
	unsigned int pev; //!< pour l'optimisation;
	
	static const unsigned int maxPev;
	
	
	
public:
	
	Squadron();
	
	bool addShip(const Ship& ship,const unsigned int& number =1 ); //!< essaye d'ajouter number de vaisseaux; retourne false se ce n'est pas possible
	bool addShip(const ShipType& shipType,const unsigned int& number =1); //!< essaye d'ajouter number de vaisseaux; retourne false se ce n'est pas possible
	
};



#endif /* SQUADRON_SQUADRON_H_ */
