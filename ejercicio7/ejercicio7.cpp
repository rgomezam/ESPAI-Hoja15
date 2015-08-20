//============================================================================
// Name        : ejercicio7capitulo15.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Vehiculo.h"
#include "Reparacion.h"

char opt, opt2;
string nombre1, nombre2,nombre3;
Vehiculo *taller[20];  //El taller puede almacenar 20 vehiculos

int main() {
	for (int i=0; i<20; i++){
		taller[i]=NULL;
	}

	while(true){
	cout << "Bienvenido al taller mecanico de Raquel. Que quiere hacer??  \n a) Registrar vehiculo \n b) Eliminar vehiculo \n c) Ver vehiculo \n d) Listar vehiculos \n e) Salir " << endl;
	cin >> opt;

	switch(opt){
	case 'a':
		cout << "Registrar vehiculo: Introduzca el nombre del dueño." << endl;
		cin >> nombre1;
		for(int j=0; j<20; j++){
			if (taller[j]==NULL){
				taller[j]=new Vehiculo(nombre1);
				cout << "ok" << endl;
			break;
			}
		}

		break;

	case 'b':
		cout << "Eliminar vehiculo: Introduzca el nombre del dueño" << endl;
		cin >> nombre2;
		for (int k=0; k<20; k++){
				if ((taller[k]!=NULL) && (taller[k]->getNombre() == nombre2))
					delete taller[k];
					taller[k]=NULL;
					break;
			}
		break;


	case 'c':
		cout << "Ver vehiculo. Que vehiculo quiere ver? Introduzca el nombre del dueño" << endl;
		cin >> nombre3;
		for (int k=0; k<20; k++){
			if (taller[k] !=NULL &&  taller[k]->getNombre() == nombre3){
		cout << "Pulse: \n a) Añadir reparacion \n b) Eliminar reparacion \n c) Listar reparaciones " << endl;
		cin >> opt2;
		switch(opt2){
		case 'a':
			taller[k]->aniadirReparacion();
			break;
		case 'b':
			taller[k]->eliminarReparacion();
			break;
		case 'c':
			cout << "Lista reparaciones" << endl;
			taller[k]->getReparaciones();
			break;
		}
		}
		}
			break;
	case 'd':
		cout << "Lista de vehiculos: " << endl;
		for (int i=0; i<20; i++){
			if (taller[i]!=NULL){
				cout << i +1 << ") Coche de " << taller[i]->getNombre() << endl;
			}
		}
		break;

	default:
		return 0;
	}

	}

	return 0;
}
