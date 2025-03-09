#ifndef CUENTAS_H
#define CUENTAS_H

#include <iostream>

class CuentaBancaria {
private:
	double saldo;
	bool activa;
	bool bloqueada;
	int retirosFallidos;
	bool esEspecial;

	const int LIMITE_BAJO = 100;
	const int LIMITE_ADVERTENCIA = 50;

	double tasaInteres;

	int contadorInactividad;
	const int MAX_INACTIVIDAD = 5;
	double penalizacionInactividad;

public:
	CuentaBancaria(double saldoInicial, bool _activa = true, bool _esEspecial = false);

	void depositar(double monto);

	void retirar(double monto);

	void transferir(bool destinoBloqueada, bool destinoActiva, double monto);
	void recibirTransferencia(double monto);

	void verificarInactividad();

	void mostrarInformacionDeCuenta(int numeroCuenta);

	void mostrarSaldo(int numeroCuenta);

	void setActiva(bool estado);
	void setEspecial(bool estado);

	bool getBloqueada();
	bool getActiva();
	bool getEspecial();
};

#endif // !CUENTAS_H
