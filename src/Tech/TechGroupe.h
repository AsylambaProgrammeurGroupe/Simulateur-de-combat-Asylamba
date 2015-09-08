/*
 * TechGroupe.h
 *
 *  Created on: 8 sept. 2015
 *      Author:
 */

#ifndef TECH_TECHGROUPE_H_
#define TECH_TECHGROUPE_H_

#include "tech.h"
#include <vector>
class TechGroupe{
	/*! \class TechGroupe
	 * 
	 * groupe les Tech pour les différente familles
	 * 
	 */
	
	
	
private:
	
	std::vector<Tech> techs;
	
	
public:
	TechGroupe(std::initializer_list<Tech> const& liste);
	TechGroupe(std::vector<Tech> const& liste);
	
	Tech operator[](const ShipFamily& f);
	
};



#endif /* TECH_TECHGROUPE_H_ */
