/*
 * utility.h
 *
 *  Created on: 2 mai 2015
 *      Author: 
 */

#ifndef UTILITY_UTILITY_H_
#define UTILITY_UTILITY_H_

#include <vector>
#include <memory>
#include <sstream>
#include <utility>
#include <iostream>


/*!
 * \defgroup utility
 * 
 * groupe contentant les utilitaire 
 * 
 * 
 */


/*!
 * \ingroup utility
 */
template <typename Type> void deletePointerInVector(std::vector<Type*>& vect){
	/**
	 *  desaloque un vecteur et remplace ses valeur avec nullptr
	 */
	for(Type*& i : vect ){
		if(i!= nullptr){
			delete i;
			i = nullptr;
		}
		
	}
};

/*!
 * \ingroup utility
 */
template <typename Type> void deletePointerInVector(std::vector<std::unique_ptr<Type>>& vect){
	/**
	 *  désalloue un vecteur de unique ptr
	 */
	for(std::unique_ptr<Type>& i : vect ){
		i.reset();
	}
}

//! transforme un vector de Type1 en un vector de Type2
/*!
 * Nécessite d'avoir un constructeur de prototype Type2(Type1) ou Type2(const Type1&)
 *
 * \ingroup utility
 */
template <typename Type1, typename Type2> std::vector<Type2> convertVector (const std::vector<Type1>& vect){
	
	std::vector<Type2> returnValue({});
	
	for(const Type1& i : vect){
		returnValue.push_back(Type2(i));
	}
	
	return returnValue;
	
}
//! convertie un Type en un string (Nécessite d'avoi un surchage de << sur un ostringstream)
/*!
 * \ingroup utility
 */
template <typename Type>  std::string toString (const Type& input){
	std::ostringstream outTextStream;
	
	outTextStream << input;
	
	return outTextStream.str();
}
//! lit à partir d'un string
/*!
 * \ingroup utility
 */
template <typename Type> Type readFormString (const std::string& inString){
	std::istringstream inTextStream(inString);
	Type read;
	inTextStream >> read;
	
	return read;
}




//! delete si ce n'est pas nullptr et le met à nullptr
/*!
 * \ingroup utility
 */
template <typename Type> void deleteIfNotNullptr(Type* ptr){
	
	if(ptr != nullptr){
		
		delete ptr;
		ptr = nullptr;
		
	}
}

//! enlève du vecteur un élément à une place spécifique (tout en gardant l'odre des autres éléments )
/*!
 * \ingroup utility
 */
template<typename Type> void removeInVectorFromPos (std::vector<Type>& vect,const size_t& pos){
	if(pos < vect.size()){ // si c'est en dehors du tableau on fait rien
		
		for(size_t i(pos); i<  vect.size()-1 ;++i){
			std::swap(vect[i],vect[i+1]);
		}
		
		vect.pop_back();
	}
	
}

template<typename Type> void removeInVectorFromPosNoOrder (std::vector<Type>& vect,const size_t& pos){
	
	size_t vectSize(vect.size());
	if(pos < vectSize){ // si c'est en dehors du tableau on fait rien
		
		
	}
	
}



template <typename Type> void coutVect(const std::vector<Type>& vect ){
	std::ostringstream outFlow;
	for(size_t i(0); i<vect.size() ;++i){
		
		outFlow << vect[i];
		if( i < vect.size()-1){
			outFlow << ",";
		}
	}
	std::cout << outFlow.str() <<std::endl;
	//logConsol.log(outFlow.str());
	
}






#endif /* UTILITY_UTILITY_H_ */
