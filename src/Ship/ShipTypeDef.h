/*
 * ShipTypeDef.h
 *
 *  Created on: 5 sept. 2015
 *      Author:
 */

#ifndef SHIP_SHIPTYPEDEF_H_
#define SHIP_SHIPTYPEDEF_H_


#include "ShipType.h"

const ShipFamily chasseur("chasseur");
const ShipFamily corvette("corvette");
const ShipFamily fregate("frégate");
const ShipFamily destroyer("destroyer");
const ShipFamily croiseur("croiseur");


const ShipType pegase("pégase",Weapon({Cannon(5)}),1,195,26,2,2980,chasseur);
const ShipType satyre("satyre",Weapon({Cannon(7)}),5,190,33,3,3860,chasseur);
const ShipType chimere("chimère",Weapon({Cannon(6,2)}),3,195,26,3,4220,chasseur);

const ShipType sirene("sirène",Weapon({Cannon(20),Cannon(2,2)}),6,190,65,5,7120,corvette);
const ShipType dryade("dryade",Weapon({Cannon(30)}),23,165,90,7,8350,corvette);
const ShipType meduse("méduse",Weapon({Cannon(20),Cannon(7,3),Cannon(12,4)}),8,145,75,9,15300,corvette);

const ShipType griffon("griffon",Weapon({Cannon(15,4)}),40,100,250,23,40000,fregate);
const ShipType cyclope("cyclope",Weapon({Cannon(30)}),23,165,90,7,80000,fregate);

const ShipType minotaure("minotaure",Weapon({Cannon(35,4),Cannon(10,2),Cannon(25)}),120,88,1200,75,112000,destroyer);
const ShipType hydre("hydre",Weapon({Cannon(21,10)}),100,75,1050,86,143000,destroyer);

const ShipType cerbere("cerbère",Weapon({Cannon(25,4),Cannon(50,2),Cannon(6,3),Cannon(175)}),135,80,1220,82,208000,croiseur);
const ShipType phenix("phénix",Weapon({Cannon(25,4),Cannon(50,4),Cannon(6,3),Cannon(200)}),150,75,1350,84,300000,croiseur);





#endif /* SHIP_SHIPTYPEDEF_H_ */
