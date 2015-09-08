/*
 * ShipFamily.h
 *
 *  Created on: 5 sept. 2015
 *      Author:
 */

#ifndef SHIP_SHIPFAMILY_H_
#define SHIP_SHIPFAMILY_H_


#include <string>

class ShipFamily{
	/*! \class ShipFamily
	 * 
	 */
	
	
private:
	
	std::string name;
	
public:
	
	ShipFamily(const std::string& name);
	
	
	const std::string& getName() const {
		return name;
	}
	
	
	
};

bool operator==(const ShipFamily& s1,const ShipFamily& s2);
bool operator!=(const ShipFamily& s1,const ShipFamily& s2);



#endif /* SHIP_SHIPFAMILY_H_ */
