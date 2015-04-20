/*
 * Cannon.cpp
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */


#include "Cannon.h"
using namespace std;




Cannon::Cannon(const unsigned int& nombre,const double& attaque)
:nombre(nombre),attaque(attaque){
	
}


unsigned int Cannon::getAttak() const{
	return attaque;
}
double Cannon::getNumberOfShot() const{
	return nombre;
}
