/*
 * Vehiculo.h
 *
 *  Created on: Aug 20, 2015
 *      Author: raquel
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <iostream>
#include "Reparacion.h"
using namespace std;

class Vehiculo {
public:

	Vehiculo();
	Vehiculo(string);
	virtual ~Vehiculo();
	string getNombre(){return nombreDuenio;}
	void aniadirReparacion();
	void eliminarReparacion();
	void getReparaciones();

private:
	string nombreDuenio;
	Reparacion *arrReparaciones[5];

};

#endif /* VEHICULO_H_ */
