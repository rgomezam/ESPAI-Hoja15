

//============================================================================
// Name        : capitulo15ejercicio4.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class CuentaCorriente{
public:
	CuentaCorriente(string, float);
	float getSaldo(){	return *pSaldo;}
	string getTitular(){return titular;}
	CuentaCorriente& operator+(float);
	CuentaCorriente& operator-(float);
	CuentaCorriente& operator +(CuentaCorriente&);
	CuentaCorriente& operator -(CuentaCorriente&);
	bool operator==(CuentaCorriente&);

private:
	string titular;
	float * pSaldo;

};


CuentaCorriente::CuentaCorriente(string titular, float saldo){
	pSaldo = new float;

	this-> titular = titular;
	*pSaldo = saldo;
}


CuentaCorriente&  CuentaCorriente::operator+(float ingreso){
	*pSaldo = *pSaldo + ingreso;
}

CuentaCorriente& CuentaCorriente::operator-(float retirado){
	*pSaldo = *pSaldo - retirado ;
}


CuentaCorriente& CuentaCorriente::operator +(CuentaCorriente& rhs){
	*pSaldo = *pSaldo + rhs.getSaldo();
}

CuentaCorriente& CuentaCorriente::operator -(CuentaCorriente& rhs){
	*pSaldo = *pSaldo - rhs.getSaldo();
}



bool CuentaCorriente::operator ==(CuentaCorriente& rhs) {
	if (*pSaldo == rhs.getSaldo()  &&  titular == rhs.getTitular()){
		return true;
	}
	if (*pSaldo != rhs.getSaldo()   ||  titular != rhs.getTitular()){
		return false;
	}
}





int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	CuentaCorriente c1("Raquel",50);
	CuentaCorriente c2("Luis", 27.43);
	CuentaCorriente c3("Ana", 2.75);
	CuentaCorriente c4("Raquel",76.09);

	cout << "Saldo cuenta 1: " << c1.getSaldo() << endl;

	c1 + 5.25;  //Aqui probamos la sobrecarga del operador suma

	cout << "+ 5.25= " <<  c1.getSaldo()  << endl;

	c1 - 6.59;  //Y la del operador resta

	cout << "- 6.59= " << c1.getSaldo()  << endl;

	c1 + c2 ;

	cout << "cuenta 1 + cuenta 2 = " << c1.getSaldo() << endl;


	c2-c3;

	cout << "cuenta 2 - cuenta 3 = " << c2.getSaldo() << endl;

	cout << "is c1 = c3 ?  -> ";
	if (c1==c3) {cout <<  "true" << endl;}
	else {cout << "false" << endl;}


	cout << "is c1 = c4 ?  -> ";
	if (c1==c4) {cout <<  "true" << endl;}
	else {cout << "false" << endl;}





	return 0;
}
