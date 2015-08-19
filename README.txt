# ESPAI-Hoja15
Ejercicios del curso de C++

Ejercicios capítulo 15
1. Dada una clase CuentaCorriente, escribe la definición de los métodos necesarios para
sobreescribir los operadores + y –. Haz 2 versiones: Una permitirá sumar/restar números
decimales, y la otra objetos CuentaCorriente.

2. Explica la diferencia entre operadores unarios y binarios, a la hora de definir la funcion de sobrecarga
correspondiente.

3. Define los métodos necesarios para sobreescribir el operador **.

4. Tomando el ejercicio 1, escribe el código necesario para sobrecargar el operador ==, teniendo en cuenta
que existe la variable float saldo.

5. Escribe el código necesario para que el siguiente código funcione correctamente.
CuentaCorriente cuenta(1000);
int x = cuenta;

6. Dado el siguiente código...
#include <iostream>
using namespace std;
class Rectangulo
{
public:
double ancho;
double alto;
Rectangulo operator+(const Rectangulo& b)
{
// COMPLETAR
}
double getArea()
{
return ancho * alto;
}
};
// Main function for the program
int main( )
{
Rectangulo c1;
Rectangulo c2;
Rectangulo c3;
c1.ancho = 6.0;
c1.alto = 7.0;
c2.ancho = 8.0;
c2.alto = 9.0;
c3= c1 + c2;
cout << "caja 1: " << c1.getArea() <<endl;
cout << "caja 2: " << c2.getArea() <<endl;
cout << "caja 3: " << c3.getArea() <<endl;
return 0;
}
...completa la función operator+ para que nos retorne un rectángulo, con la suma de alturas y anchuras.

7. Práctica final del capítulo
Crea una aplicación que gestione un taller mecánico. El menú será el siguiente:
a. Registrar vehículo
b. Eliminar vehículo
c. Ver vehículo
i. Añadir reparación
ii. Eliminar reparación
iii. Listar reparaciones
d. Listar vehículos
e. Salir
Define una clase Vehículo, que tendrá como variable miembro una Reparación. Esta clase Reparación
tendrá un campo concepto (tipo texto) y otro precio (numérico).
Haz la sobrecarga de operadores correspondiente para poder sumar y restar reparaciones a un
vehículo.
