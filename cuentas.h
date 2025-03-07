#ifndef CUENTAS_H
#define CUENTAS_H

class CuentaBancaria {
private: 
	double saldo;
	
public:
	//Constructor
	CuentaBancaria(double _saldo);

	//Metodos 
	void depositar(double monto);
	void retirar(double monto);
	void mostrarSaldo();

};

#endif