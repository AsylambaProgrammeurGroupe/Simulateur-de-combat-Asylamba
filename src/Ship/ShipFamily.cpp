/*
 * ShipFamily.cpp
 *
 *  Created on: 5 sept. 2015
 *      Author:
 */

#include "ShipFamily.h"





ShipFamily::ShipFamily(const std::string& name):name(name){
	
};


bool operator==(const ShipFamily& s1,const ShipFamily& s2){
	return (s1.getName() == s2.getName());
}
bool operator!=(const ShipFamily& s1,const ShipFamily& s2){
	return (not (s1==s2));
}
