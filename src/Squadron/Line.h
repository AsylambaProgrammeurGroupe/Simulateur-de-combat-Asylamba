/*
 * Line.h
 *
 *  Created on: 6 sept. 2015
 *      Author:
 */

#ifndef SQUADRON_LINE_H_
#define SQUADRON_LINE_H_


#include "Squadron.h"

class Line:public std::vector<Squadron>{
	/*! \class Line
	 * 
	 */
	
	
private:
	
	
	
	
public:
	
	
	Line(std::initializer_list<Squadron> const& liste);
	Line(std::vector<Squadron> const& liste);
};



#endif /* SQUADRON_LINE_H_ */
