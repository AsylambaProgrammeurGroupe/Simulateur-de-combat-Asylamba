/*
 * Line.cpp
 *
 *  Created on: 6 sept. 2015
 *      Author:
 */

#include "Line.h"





Line::Line(std::initializer_list<Squadron> const& liste):std::vector<Squadron>(liste){
	
}
Line::Line(std::vector<Squadron> const& liste):std::vector<Squadron>(liste){
	
}
