/*
 * Reparacion.h
 *
 *  Created on: Aug 20, 2015
 *      Author: raquel
 */

#ifndef REPARACION_H_
#define REPARACION_H_
#include <iostream>
using namespace std;

class Reparacion {
public:
	Reparacion(string);
	virtual ~Reparacion();
	string getNombre(){return nombreRep;}

private:
	string nombreRep;

};

#endif /* REPARACION_H_ */
