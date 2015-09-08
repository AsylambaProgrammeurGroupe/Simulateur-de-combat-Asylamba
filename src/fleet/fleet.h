/*
 * fleet.h
 *
 *  Created on: 1 sept. 2015
 *      Author:
 */

#ifndef FLEET_FLEET_H_
#define FLEET_FLEET_H_

#include "../Squadron/Line.h"
#include "../Tech/TechGroupe.h"
//typedef std::vector<Squadron> Ligne;

class Fleet{
	
	/*! \class Fleet 
	 * gère les flottes
	 * 
	 */
	
private:
	
	unsigned short level;
	
	//! vecteur contenant les lignes 
	std::vector<Line> Lines;
	TechGroupe techGroupe;
	
public:
	
	
	
	
	
	
};



#endif /* FLEET_FLEET_H_ */
