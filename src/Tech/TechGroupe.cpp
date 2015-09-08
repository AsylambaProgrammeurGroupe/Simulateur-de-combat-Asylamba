/*
 * TechGroupe.cpp
 *
 *  Created on: 8 sept. 2015
 *      Author:
 */

#include "TechGroupe.h"





TechGroupe::TechGroupe(std::initializer_list<Tech> const& liste):techs(liste){
	
}
TechGroupe::TechGroupe(std::vector<Tech> const& liste):techs(liste){
	
}


Tech TechGroupe::operator[](const ShipFamily& f){
	Tech returnVal(f); // si on truve pas la famille on retourne une tech neutre (qui a 1 comme modif)
	for(const Tech& t : techs){ // on veux bien une copie
		if (t.getShipFamily() == f){
			returnVal =  t;
		}
	}
	
	return returnVal;
	
}
