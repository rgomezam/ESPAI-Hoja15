/*
 * Vehiculo.cpp
 *
 *  Created on: Aug 20, 2015
 *      Author: raquel
 */

#include "Vehiculo.h"

Vehiculo::Vehiculo(){
	cout << "Llamando constructior por defecto" << endl;
}

Vehiculo::Vehiculo(string nombre) {
	// TODO Auto-generated constructor stub
	this->nombreDuenio=nombre;
		cout << "Registando vehiculo de " << this->nombreDuenio << "..." << endl;
	for (int n=0; n<5 ; n++){
		arrReparaciones[n]= NULL;
	}
}

Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

void Vehiculo::aniadirReparacion() {
	string rep1;

	cout << "introduzca el nombre de la reparacion" << endl;
	cin >> rep1;

	for (int i=0; i<5; i++){
		if (arrReparaciones[i]==NULL){
			arrReparaciones[i]=new Reparacion(rep1);
			break;
		}
	}

}

void Vehiculo::eliminarReparacion() {
	string rep1;

	cout << "introduzca el nombre de la reparacion que quiere eliminar" << endl;
	cin >> rep1;

	for (int i=0; i<5; i++){
		if (arrReparaciones[i]->getNombre()==rep1) {
			delete arrReparaciones[i];
			arrReparaciones[i]=NULL;
			break;
		}
	}

}

void Vehiculo::getReparaciones() {
	cout << "Reparaciones: ";
	for (int n=0; n<5 ; n++){
		if (arrReparaciones[n]!=NULL){
			cout << arrReparaciones[n]->getNombre() << " , " ;
		}
	}
	cout << endl;
}
