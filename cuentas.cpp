#include <iostream>
#include "cuentas.h"

using namespace std;

//Constructor
CuentaBancaria::CuentaBancaria(double _saldo) {
	saldo = _saldo;
}

//Metodo para depositar
void CuentaBancaria::depositar(double monto) {
	if (monto > 0) {
		saldo += monto;
		cout << "Deposito exitoso, saldo actual: " << saldo << endl;
	}
	else {
		cout << "Monto invalido..." << endl;
	}
}

//Metodo para retirar 
void CuentaBancaria::retirar(double monto) {
	if (monto > saldo) {
		cout << "Fondos insuficientes... " << endl;
	}
	else if (monto > 0) {
		saldo -= monto;
		cout << "Retiro exitoso, saldo actual: " << saldo << endl;
	}
	else {
		cout << "Monto invalido..." << endl;
	}
}

//Metodo para mostrar saldo
void CuentaBancaria::mostrarSaldo() {
	cout << "Su saldo es: " << saldo << endl;
}
