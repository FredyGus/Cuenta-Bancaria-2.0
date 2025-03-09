#include "Cuentas.h"
#include <iostream>
#include <iomanip>

using namespace std;

CuentaBancaria::CuentaBancaria(double saldoInicial, bool _activa, bool _esEspecial) {
	saldo = saldoInicial;
	activa = _activa;
	bloqueada = false;
	retirosFallidos = 0;
	esEspecial = _esEspecial;
	tasaInteres = 0.02;
	contadorInactividad = 0;
	penalizacionInactividad = 10.0;
}

void CuentaBancaria::depositar(double monto) {
	if (bloqueada) {
		cout << "La cuenta esta bloqueada. No se puede depositar." << endl;
		return;
	}

	if (!activa) {
		cout << "La cuenta esta inactiva. No se puede depositar. " << endl;
		return;
	}

	if (monto > 0) {
		double interes = monto * tasaInteres;
		saldo += (monto + interes);
		cout << "Deposito exitoso. Se aplico interes: " << interes
			<< ". Saldo acutal: " << saldo << endl;

		//Reiniciamos el contador de inactividad al operar 
		contadorInactividad = 0;
	}
	else {
		cout << "El monto a depositar es invalido..." << endl;
	}
}

void CuentaBancaria::retirar(double monto) {
	if (bloqueada) {
		cout << "La cuenta esta bloqueda. No se puede retirar." << endl;
		return;
	}

	if (!activa) {
		cout << "La cuenta esta inactiva. No se puede retirar." << endl;
		return;
	}

	if (esEspecial && monto > (saldo * 0.5)) {
		cout << "En una cuenta especial no se puede retirar mas del 50% del saldo." << endl;
		return;
	}
	if (monto < 0) {
		cout << "Monto invalido..." << endl;
		return;
	}
	else if (monto > saldo) {
		cout << "Fondos insuficientes... Retiro Fallido." << endl;
		retirosFallidos++;
		if (retirosFallidos > 3) {
			bloqueada = true;
			cout << "Cuenta bloqueada por multiples intentos fallidos." << endl;
		}
		return;
	}
	else {
		saldo -= monto;
		cout << "Retiro exitoso. Saldo actual: " << saldo << endl;

		retirosFallidos = 0;
		contadorInactividad = 0;

		if (saldo <= LIMITE_ADVERTENCIA) {
			cout << "¡ADVERTENCIA! Saldo extremadamente bajo." << endl;
		}
		else if (saldo <= LIMITE_BAJO) {
			cout << "Advertencia: Saldo bajo." << endl;
		}
	}
}

void CuentaBancaria::transferir(bool destinoBloqueada, bool destinoActiva, double monto) {
	if (bloqueada || !activa) {
		cout << "La cuenta origen no puede realizar transferencias." << endl;
		return;
	}
	if (destinoBloqueada || !destinoActiva) {
		cout << "La cuenta destino no puede recibir transferencias." << endl;
		return;
	}

	if (monto > saldo) {
		cout << "Fondos insuficientes para transferir." << endl;
		return;
	}
	else if (monto < 0) {
		cout << "Monto invalido para transferir..." << endl;
		return;
	}
	else {
		saldo -= monto;
		cout << "Transferencia exitosa. Nuevo Saldo: " << saldo << endl;
		contadorInactividad = 0;
	}
}

void CuentaBancaria::recibirTransferencia(double monto) {
	if (bloqueada || !activa) {
		return;
	}
	else {
		saldo += monto;
	}
}

void CuentaBancaria::verificarInactividad() {
	contadorInactividad++;
	if (contadorInactividad > MAX_INACTIVIDAD) {
		saldo -= penalizacionInactividad;
		cout << "Se aplico penalizacion por inactividad. Nuevo saldo: " << saldo << endl;
		contadorInactividad = 0;
	}
}


void CuentaBancaria::mostrarInformacionDeCuenta(int numeroCuenta) {
	// Anchos de las columnas (deben coincidir con la cabecera)
	int w1 = 2, w2 = 6, w3 = 9, w4 = 13, w5 = 9;
	int c = 179;

	cout << left << char(c) << " " // Borde izquierdo
		<< setw(w1) << numeroCuenta << char(c) << " "
		<< setw(w2) << saldo << char(c) << " "
		<< (activa ? "\033[92m" : "\033[91m") << setw(w3) << (activa ? "Activa" : "Inactiva") << "\033[0m" << char(c) << " "
		<< (bloqueada ? "\033[91m" : "\033[92m") << setw(w4) << (bloqueada ? "Bloqueada" : "Desbloqueada") << "\033[0m" << char(c) << " "
		<< (esEspecial ? "\033[93m" : "\033[96m") << setw(w5) << (esEspecial ? "Especial" : "Normal") << "\033[0m" << char(c) << endl;
}


void CuentaBancaria::mostrarSaldo(int numeroCuenta) {
	int w1 = 2, w2 = 7;
	int linea = 196;
	int c = 179;

	cout << char(218)
		<< setw(w1) << string(w1 + 1, linea) << char(194)
		<< setw(w2) << string(w2 + 1, linea) << char(191) << endl;

	cout << left << char(c)
		<< setw(w1 + 1) << " #" << char(c)
		<< setw(w2 + 1) << " Saldo" << char(c) << endl;

	cout << char(195)
		<< setw(w1) << string(w1 + 1, linea) << char(197)
		<< setw(w2) << string(w2 + 1, linea) << char(180) << endl;

	cout << left << char(c) << " "
		<< setw(w1) << numeroCuenta << char(c) << " "
		<< setw(w2) << saldo << char(c) << endl;

	cout << char(192)
		<< setw(w1) << string(w1 + 1, linea) << char(193)
		<< setw(w2) << string(w2 + 1, linea) << char(217) << endl;

	//cout << "Cuenta #: " << numeroCuenta << " | " <<endl;
	//cout << "Saldo Actual: " << saldo << endl;
}

void CuentaBancaria::setActiva(bool estado) {
	activa = estado;
}

void CuentaBancaria::setEspecial(bool estado) {
	esEspecial = estado;
}

bool CuentaBancaria::getBloqueada() { return bloqueada; }
bool CuentaBancaria::getActiva() { return activa; }
bool CuentaBancaria::getEspecial() { return esEspecial; }