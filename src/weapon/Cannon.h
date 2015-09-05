/*
 * Cannon.h
 *
 *  Created on: 19 avr. 2015
 *      Author: 
 */

#ifndef WEAPON_CANNON_H_
#define WEAPON_CANNON_H_


class Cannon{
	
private:
	
	unsigned int nombre;
	double attaque;
	
public:
	Cannon(const double& attaque,const unsigned int& nombr=1);
	
	
	unsigned int getAttak() const;
	double getNumberOfShot() const;
};


#endif /* WEAPON_CANNON_H_ */
