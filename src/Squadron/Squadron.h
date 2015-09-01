/*
 * Squadron.h
 *
 *  Created on: 1 sept. 2015
 *      Author: 
 */

#ifndef SQUADRON_SQUADRON_H_
#define SQUADRON_SQUADRON_H_

#include "../Ship/Ship.h"



class Squadron{
	/*! \class Squadron
	 * gère les escadrilles
	 */
	
private:
	
	std::vector<Ship> ships; //!< les vaisseaux
	
	unsigned int pev; //!< pour l'optimisation;
	
	static const unsigned int maxPev;
	
	
	
public:
	
	Squadron();
	
	bool addShip(const Ship& ship,const unsigned int& number =1 ); //!< essaye d'ajouter number de vaisseaux; retourne false se ce n'est pas possible
	bool addShip(const ShipType& shipType,const unsigned int& number =1); //!< essaye d'ajouter number de vaisseaux; retourne false se ce n'est pas possible
	bool removeShip(const size_t& pos);//!< enlève un vaisseaux à la position retourne faix s'il il n'a pas peu enlever
	bool removeShip(const ShipType& shipType,const unsigned int& number =1);
	/*!< 
	 * enlève number vaisseaux d'un type donner; retourne faux s'il il n'a pas peu enlever
	 * si le nombre est trop garnd il enlevera le maximun de vaisseaux
	 */

};



#endif /* SQUADRON_SQUADRON_H_ */
