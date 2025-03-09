#include <iostream>
#include "Cuentas.h"
#include <Windows.h>
#include <iomanip>

using namespace std;

void menuSeleccionCuenta() {
	cout << "\n--- MENU DE SELECCION DE CUENTA ---\n";
	cout << "1. Ingresar numero de cuenta\n";
	cout << "2. Mostrar todas las cuentas\n";
	cout << "3. Salir del Sistema\n";
	cout << "Ingrese una opcion: ";
}


void menuOperacionesCuenta(int numeroCuenta) {
	cout << "\n--- MENU DE OPERACIONES DE CUENTA #" << numeroCuenta << " ---\n";
	cout << "1. Depositar\n";
	cout << "2. Retirar\n";
	cout << "3. Transferir\n";
	cout << "4. Mostrar saldo\n";
	cout << "5. Mostrar informacion de cuenta\n";
	cout << "6. Verificar inactividad\n";
	cout << "7. Regresar al menu de seleccion de cuenta\n";
	cout << "Ingrese una opcion: ";
}

void dibujarLinea(int w1, int w2, int w3, int w4, int w5, char izquierda, char medio, char derecha, char linea) {
	cout << char(izquierda)
		<< string(w1, linea) << char(medio)
		<< string(w2, linea) << char(medio)
		<< string(w3, linea) << char(medio)
		<< string(w4, linea) << char(medio)
		<< string(w5, linea) << char(derecha) << endl;
}

void cabecera() {
	int w1 = 3, w2 = 7, w3 = 10, w4 = 14, w5 = 10;
	int cruzIzq = 195, cruzCentro = 197, linea = 179;
	dibujarLinea(w1, w2, w3, w4, w5, char(218), char(194), char(191), char(196));  // Línea superior

	cout << left << char(linea)
		<< setw(w1) << " #" << char(linea)
		<< setw(w2) << " Saldo" << char(linea)
		<< setw(w3) << " Estado" << char(linea)
		<< setw(w4) << " Bloqueo" << char(linea)
		<< setw(w5) << " Tipo" << char(linea) << endl;

	dibujarLinea(w1, w2, w3, w4, w5, cruzIzq, cruzCentro, char(180), char(196));  // Línea divisoria
}

void pie() {
	// Anchos de las columnas
	int w1 = 3, w2 = 7, w3 = 10, w4 = 14, w5 = 10;
	int linea = 196;
	int div = 193;

	// Imprimir línea inferior
	cout << char(192) // Esquina inferior izquierda
		<< string(w1, linea) << char(div)
		<< string(w2, linea) << char(div)
		<< string(w3, linea) << char(div)
		<< string(w4, linea) << char(div)
		<< string(w5, linea) << char(217) << endl; // Esquina inferior derecha
}



int main() {
	CuentaBancaria cuenta1(1500, true, false);
	CuentaBancaria cuenta2(1500, false, true);
	CuentaBancaria cuenta3(1500, false, false);
	CuentaBancaria cuenta4(1500, true, true);

	CuentaBancaria cuenta5(1500, true, false);
	CuentaBancaria cuenta6(1500, false, true);
	CuentaBancaria cuenta7(1500, false, false);
	CuentaBancaria cuenta8(1500, true, true);

	CuentaBancaria cuenta9(1500, true, false);
	CuentaBancaria cuenta10(1500, false, true);
	CuentaBancaria cuenta11(1500, false, false);
	CuentaBancaria cuenta12(1500, true, true);

	CuentaBancaria cuenta13(1500, true, false);
	CuentaBancaria cuenta14(1500, false, true);
	CuentaBancaria cuenta15(1500, false, false);
	CuentaBancaria cuenta16(1500, true, true);

	CuentaBancaria cuenta17(1500, true, false);
	CuentaBancaria cuenta18(1500, false, true);
	CuentaBancaria cuenta19(1500, false, false);
	CuentaBancaria cuenta20(1500, true, true);

	CuentaBancaria cuenta21(1500, true, false);
	CuentaBancaria cuenta22(1500, false, true);
	CuentaBancaria cuenta23(1500, false, false);
	CuentaBancaria cuenta24(1500, true, true);

	CuentaBancaria cuenta25(1500, true, false);
	CuentaBancaria cuenta26(1500, false, true);
	CuentaBancaria cuenta27(1500, false, false);
	CuentaBancaria cuenta28(1500, true, true);

	CuentaBancaria cuenta29(1500, true, false);
	CuentaBancaria cuenta30(1500, false, true);


	int opcionSeleccion, opcionOperacion;
	int numeroCuenta, cuentaDestino;
	double monto;

	do
	{
		system("cls");
		menuSeleccionCuenta();
		cin >> opcionSeleccion;

		switch (opcionSeleccion)
		{
		case 1:
			cout << "Ingrese su numero de cuenta (1-4): ";
			cin >> numeroCuenta;
			if (numeroCuenta < 1 || numeroCuenta > 4) {
				cout << "Numero de cuenta invalida...\n";
				break;
			}
			do {
				system("cls");
				menuOperacionesCuenta(numeroCuenta);
				cin >> opcionOperacion;
				switch (opcionOperacion)
				{
				case 1: //Depositar
					system("cls");
					cout << "Ingrese el monto a depositar: ";
					cin >> monto;
					switch (numeroCuenta)
					{
					case 1:  cuenta1.depositar(monto);  break;
					case 2:  cuenta2.depositar(monto);  break;
					case 3:  cuenta3.depositar(monto);  break;
					case 4:  cuenta4.depositar(monto);  break;
					case 5:  cuenta5.depositar(monto);  break;
					case 6:  cuenta6.depositar(monto);  break;
					case 7:  cuenta7.depositar(monto);  break;
					case 8:  cuenta8.depositar(monto);  break;
					case 9:  cuenta9.depositar(monto);  break;
					case 10: cuenta10.depositar(monto); break;
					case 11: cuenta11.depositar(monto); break;
					case 12: cuenta12.depositar(monto); break;
					case 13: cuenta13.depositar(monto); break;
					case 14: cuenta14.depositar(monto); break;
					case 15: cuenta15.depositar(monto); break;
					case 16: cuenta16.depositar(monto); break;
					case 17: cuenta17.depositar(monto); break;
					case 18: cuenta18.depositar(monto); break;
					case 19: cuenta19.depositar(monto); break;
					case 20: cuenta20.depositar(monto); break;
					case 21: cuenta21.depositar(monto); break;
					case 22: cuenta22.depositar(monto); break;
					case 23: cuenta23.depositar(monto); break;
					case 24: cuenta24.depositar(monto); break;
					case 25: cuenta25.depositar(monto); break;
					case 26: cuenta26.depositar(monto); break;
					case 27: cuenta27.depositar(monto); break;
					case 28: cuenta28.depositar(monto); break;
					case 29: cuenta29.depositar(monto); break;
					case 30: cuenta30.depositar(monto); break;
					}
					break;
				case 2: //Retirar
					system("cls");
					cout << "Ingrese el monto a retirar: ";
					cin >> monto;
					switch (numeroCuenta) {
					case 1:  cuenta1.retirar(monto);  break;
					case 2:  cuenta2.retirar(monto);  break;
					case 3:  cuenta3.retirar(monto);  break;
					case 4:  cuenta4.retirar(monto);  break;
					case 5:  cuenta5.retirar(monto);  break;
					case 6:  cuenta6.retirar(monto);  break;
					case 7:  cuenta7.retirar(monto);  break;
					case 8:  cuenta8.retirar(monto);  break;
					case 9:  cuenta9.retirar(monto);  break;
					case 10: cuenta10.retirar(monto); break;
					case 11: cuenta11.retirar(monto); break;
					case 12: cuenta12.retirar(monto); break;
					case 13: cuenta13.retirar(monto); break;
					case 14: cuenta14.retirar(monto); break;
					case 15: cuenta15.retirar(monto); break;
					case 16: cuenta16.retirar(monto); break;
					case 17: cuenta17.retirar(monto); break;
					case 18: cuenta18.retirar(monto); break;
					case 19: cuenta19.retirar(monto); break;
					case 20: cuenta20.retirar(monto); break;
					case 21: cuenta21.retirar(monto); break;
					case 22: cuenta22.retirar(monto); break;
					case 23: cuenta23.retirar(monto); break;
					case 24: cuenta24.retirar(monto); break;
					case 25: cuenta25.retirar(monto); break;
					case 26: cuenta26.retirar(monto); break;
					case 27: cuenta27.retirar(monto); break;
					case 28: cuenta28.retirar(monto); break;
					case 29: cuenta29.retirar(monto); break;
					case 30: cuenta30.retirar(monto); break;
					}
					break;
				case 3: //Transferencia
					system("cls");
					cout << "Ingrese el numero de cuenta destino (1-4): ";
					cin >> cuentaDestino;
					if (cuentaDestino < 1 || cuentaDestino > 4) {
						cout << "Numero de cuenta destino invalido...\n";
						break;
					}
					else if (cuentaDestino == numeroCuenta) {
						cout << "Numero de cuenta destino igual al origen...\n";
						break;
					}
					else {
						cout << "Ingrese el monto a transferir: ";
						cin >> monto;
						switch (numeroCuenta)
						{
						case 1:
							switch (cuentaDestino) {
							case 2:cuenta1.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto);cuenta2.recibirTransferencia(monto);break;
							case 3:cuenta1.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto);cuenta3.recibirTransferencia(monto);break;
							case 4:cuenta1.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto);cuenta4.recibirTransferencia(monto);break;
							case 5:cuenta1.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto);cuenta5.recibirTransferencia(monto);break;
							case 6:cuenta1.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto);cuenta6.recibirTransferencia(monto);break;
							case 7:cuenta1.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto);cuenta7.recibirTransferencia(monto);break;
							case 8:cuenta1.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto);cuenta8.recibirTransferencia(monto);break;
							case 9:cuenta1.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto);cuenta9.recibirTransferencia(monto);break;
							case 10:cuenta1.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto);cuenta10.recibirTransferencia(monto);break;
							case 11:cuenta1.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto);cuenta11.recibirTransferencia(monto);break;
							case 12:cuenta1.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto);cuenta12.recibirTransferencia(monto);break;
							case 13:cuenta1.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto);cuenta13.recibirTransferencia(monto);break;
							case 14:cuenta1.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto);cuenta14.recibirTransferencia(monto);break;
							case 15:cuenta1.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto);cuenta15.recibirTransferencia(monto);break;
							case 16:cuenta1.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto);cuenta16.recibirTransferencia(monto);break;
							case 17:cuenta1.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto);cuenta17.recibirTransferencia(monto);break;
							case 18:cuenta1.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto);cuenta18.recibirTransferencia(monto);break;
							case 19:cuenta1.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto);cuenta19.recibirTransferencia(monto);break;
							case 20:cuenta1.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto);cuenta20.recibirTransferencia(monto);break;
							case 21:cuenta1.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto);cuenta21.recibirTransferencia(monto);break;
							case 22:cuenta1.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto);cuenta22.recibirTransferencia(monto);break;
							case 23:cuenta1.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto);cuenta23.recibirTransferencia(monto);break;
							case 24:cuenta1.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto);cuenta24.recibirTransferencia(monto);break;
							case 25:cuenta1.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto);cuenta25.recibirTransferencia(monto);break;
							case 26:cuenta1.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto);cuenta26.recibirTransferencia(monto);break;
							case 27:cuenta1.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto);cuenta27.recibirTransferencia(monto);break;
							case 28:cuenta1.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto);cuenta28.recibirTransferencia(monto);break;
							case 29:cuenta1.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto);cuenta29.recibirTransferencia(monto);break;
							case 30:cuenta1.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto);cuenta30.recibirTransferencia(monto);break;
							} break;
						case 2:
							switch (cuentaDestino) {
							case 1: cuenta2.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 3: cuenta2.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta2.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta2.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta2.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta2.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta2.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta2.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta2.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta2.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta2.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta2.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta2.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta2.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta2.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta2.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta2.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta2.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta2.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta2.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta2.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta2.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta2.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta2.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta2.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta2.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta2.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta2.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta2.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 3:
							switch (cuentaDestino) {
							case 1: cuenta3.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta3.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 4: cuenta3.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta3.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta3.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta3.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta3.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta3.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta3.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta3.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta3.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta3.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta3.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta3.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta3.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta3.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta3.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta3.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta3.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta3.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta3.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta3.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta3.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta3.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta3.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta3.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta3.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta3.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta3.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 4:
							switch (cuentaDestino) {
							case 1: cuenta4.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta4.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta4.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 5: cuenta4.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta4.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta4.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta4.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta4.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta4.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta4.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta4.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta4.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta4.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta4.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta4.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta4.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta4.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta4.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta4.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta4.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta4.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta4.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta4.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta4.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta4.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta4.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta4.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta4.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta4.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 5:
							switch (cuentaDestino) {
							case 1: cuenta5.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta5.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta5.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta5.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 6: cuenta5.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta5.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta5.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta5.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta5.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta5.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta5.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta5.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta5.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta5.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta5.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta5.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta5.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta5.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta5.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta5.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta5.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta5.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta5.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta5.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta5.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta5.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta5.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta5.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta5.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 6:
							switch (cuentaDestino) {
							case 1: cuenta6.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta6.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta6.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta6.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta6.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 7: cuenta6.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta6.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta6.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta6.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta6.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta6.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta6.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta6.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta6.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta6.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta6.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta6.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta6.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta6.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta6.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta6.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta6.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta6.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta6.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta6.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta6.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta6.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta6.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta6.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 7:
							switch (cuentaDestino) {
							case 1: cuenta7.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta7.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta7.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta7.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta7.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta7.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
								// No se incluye case 7 (misma cuenta de origen)
							case 8: cuenta7.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta7.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta7.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta7.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta7.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta7.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta7.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta7.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta7.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta7.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta7.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta7.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta7.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta7.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta7.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta7.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta7.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta7.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta7.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta7.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta7.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta7.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta7.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 8:
							switch (cuentaDestino) {
							case 1: cuenta8.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta8.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta8.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta8.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta8.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta8.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta8.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
								// No se incluye case 8 (misma cuenta de origen)
							case 9: cuenta8.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta8.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta8.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta8.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta8.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta8.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta8.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta8.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta8.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta8.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta8.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta8.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta8.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta8.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta8.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta8.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta8.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta8.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta8.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta8.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta8.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta8.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 9:
							switch (cuentaDestino) {
							case 1: cuenta9.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta9.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta9.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta9.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta9.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta9.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta9.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta9.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
								// No se incluye case 9 (misma cuenta de origen)
							case 10: cuenta9.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta9.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta9.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta9.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta9.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta9.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta9.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta9.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta9.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta9.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta9.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta9.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta9.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta9.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta9.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta9.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta9.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta9.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta9.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta9.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta9.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 10:
							switch (cuentaDestino) {
							case 1: cuenta10.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta10.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta10.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta10.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta10.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta10.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta10.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta10.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta10.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
								// No se incluye case 10 (misma cuenta de origen)
							case 11: cuenta10.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta10.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta10.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta10.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta10.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta10.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta10.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta10.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta10.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta10.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta10.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta10.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta10.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta10.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta10.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta10.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta10.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta10.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta10.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta10.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 11:
							switch (cuentaDestino) {
							case 1: cuenta11.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta11.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta11.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta11.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta11.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta11.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta11.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta11.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta11.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta11.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
								// no se incluye case 11 (misma cuenta)
							case 12: cuenta11.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta11.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta11.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta11.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta11.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta11.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta11.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta11.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta11.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta11.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta11.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta11.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta11.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta11.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta11.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta11.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta11.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta11.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta11.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 12:
							switch (cuentaDestino) {
							case 1: cuenta12.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta12.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta12.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta12.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta12.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta12.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta12.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta12.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta12.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta12.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta12.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
								// no se incluye case 12 (misma cuenta)
							case 13: cuenta12.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta12.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta12.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta12.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta12.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta12.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta12.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta12.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta12.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta12.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta12.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta12.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta12.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta12.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta12.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta12.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta12.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta12.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 13:
							switch (cuentaDestino) {
							case 1: cuenta13.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta13.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta13.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta13.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta13.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta13.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta13.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta13.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta13.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta13.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta13.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta13.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
								// no se incluye case 13
							case 14: cuenta13.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta13.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta13.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta13.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta13.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta13.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta13.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta13.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta13.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta13.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta13.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta13.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta13.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta13.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta13.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta13.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta13.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 14:
							switch (cuentaDestino) {
							case 1: cuenta14.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta14.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta14.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta14.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta14.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta14.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta14.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta14.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta14.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta14.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta14.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta14.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta14.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 15: cuenta14.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta14.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta14.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta14.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta14.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta14.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta14.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta14.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta14.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta14.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta14.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta14.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta14.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta14.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta14.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta14.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 15:
							switch (cuentaDestino) {
							case 1: cuenta15.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta15.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta15.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta15.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta15.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta15.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta15.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta15.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta15.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta15.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta15.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta15.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta15.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta15.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 16: cuenta15.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta15.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta15.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta15.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta15.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta15.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta15.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta15.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta15.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta15.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta15.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta15.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta15.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta15.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta15.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 16:
							switch (cuentaDestino) {
							case 1: cuenta16.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta16.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta16.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta16.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta16.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta16.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta16.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta16.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta16.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta16.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta16.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta16.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta16.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta16.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta16.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 17: cuenta16.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta16.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta16.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta16.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta16.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta16.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta16.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta16.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta16.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta16.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta16.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta16.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta16.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta16.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 17:
							switch (cuentaDestino) {
							case 1: cuenta17.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta17.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta17.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta17.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta17.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta17.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta17.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta17.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta17.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta17.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta17.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta17.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta17.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta17.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta17.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta17.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 18: cuenta17.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta17.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta17.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta17.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta17.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta17.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta17.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta17.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta17.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta17.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta17.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta17.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta17.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 18:
							switch (cuentaDestino) {
							case 1: cuenta18.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta18.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta18.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta18.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta18.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta18.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta18.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta18.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta18.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta18.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta18.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta18.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta18.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta18.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta18.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta18.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta18.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 19: cuenta18.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta18.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta18.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta18.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta18.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta18.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta18.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta18.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta18.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta18.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta18.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta18.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 19:
							switch (cuentaDestino) {
							case 1: cuenta19.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta19.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta19.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta19.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta19.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta19.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta19.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta19.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta19.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta19.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta19.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta19.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta19.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta19.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta19.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta19.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta19.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta19.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 20: cuenta19.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta19.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta19.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta19.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta19.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta19.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta19.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta19.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta19.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta19.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta19.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 20:
							switch (cuentaDestino) {
							case 1: cuenta20.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta20.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta20.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta20.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta20.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta20.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta20.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta20.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta20.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta20.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta20.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta20.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta20.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta20.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta20.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta20.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta20.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta20.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta20.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 21: cuenta20.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta20.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta20.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta20.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta20.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta20.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta20.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta20.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta20.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta20.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 21:
							switch (cuentaDestino) {
							case 1: cuenta21.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta21.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta21.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta21.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta21.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta21.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta21.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta21.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta21.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta21.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta21.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta21.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta21.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta21.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta21.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta21.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta21.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta21.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta21.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta21.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
								// no case 21
							case 22: cuenta21.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta21.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta21.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta21.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta21.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta21.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta21.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta21.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta21.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 22:
							switch (cuentaDestino) {
							case 1: cuenta22.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta22.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta22.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta22.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta22.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta22.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta22.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta22.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta22.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta22.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta22.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta22.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta22.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta22.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta22.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta22.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta22.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta22.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta22.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta22.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta22.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
								// no case 22
							case 23: cuenta22.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta22.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta22.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta22.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta22.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta22.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta22.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta22.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 23:
							switch (cuentaDestino) {
							case 1: cuenta23.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta23.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta23.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta23.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta23.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta23.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta23.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta23.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta23.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta23.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta23.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta23.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta23.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta23.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta23.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta23.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta23.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta23.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta23.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta23.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta23.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta23.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
								// no case 23
							case 24: cuenta23.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta23.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta23.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta23.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta23.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta23.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta23.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 24:
							switch (cuentaDestino) {
							case 1: cuenta24.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta24.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta24.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta24.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta24.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta24.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta24.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta24.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta24.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta24.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta24.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta24.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta24.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta24.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta24.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta24.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta24.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta24.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta24.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta24.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta24.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta24.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta24.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
								// no case 24
							case 25: cuenta24.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta24.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta24.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta24.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta24.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta24.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 25:
							switch (cuentaDestino) {
							case 1: cuenta25.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta25.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta25.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta25.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta25.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta25.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta25.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta25.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta25.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta25.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta25.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta25.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta25.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta25.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta25.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta25.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta25.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta25.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta25.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta25.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta25.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta25.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta25.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta25.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
								// no case 25
							case 26: cuenta25.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta25.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta25.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta25.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta25.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 26:
							switch (cuentaDestino) {
							case 1: cuenta26.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta26.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta26.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta26.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta26.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta26.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta26.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta26.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta26.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta26.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta26.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta26.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta26.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta26.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta26.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta26.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta26.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta26.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta26.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta26.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta26.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta26.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta26.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta26.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta26.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
								// no case 26
							case 27: cuenta26.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta26.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta26.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta26.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 27:
							switch (cuentaDestino) {
							case 1: cuenta27.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta27.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta27.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta27.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta27.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta27.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta27.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta27.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta27.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta27.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta27.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta27.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta27.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta27.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta27.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta27.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta27.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta27.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta27.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta27.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta27.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta27.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta27.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta27.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta27.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta27.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
								// no case 27
							case 28: cuenta27.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta27.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta27.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 28:
							switch (cuentaDestino) {
							case 1: cuenta28.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta28.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta28.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta28.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta28.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta28.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta28.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta28.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta28.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta28.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta28.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta28.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta28.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta28.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta28.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta28.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta28.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta28.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta28.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta28.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta28.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta28.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta28.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta28.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta28.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta28.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta28.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
								// no case 28
							case 29: cuenta28.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: cuenta28.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 29:
							switch (cuentaDestino) {
							case 1: cuenta29.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta29.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta29.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta29.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta29.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta29.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta29.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta29.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta29.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta29.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta29.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta29.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta29.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta29.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta29.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta29.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta29.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta29.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta29.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta29.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta29.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta29.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta29.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta29.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta29.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta29.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta29.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta29.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
								// no case 29
							case 30: cuenta29.transferir(cuenta30.getBloqueada(), cuenta30.getActiva(), monto); cuenta30.recibirTransferencia(monto); break;
							} break;
						case 30:
							switch (cuentaDestino) {
							case 1: cuenta30.transferir(cuenta1.getBloqueada(), cuenta1.getActiva(), monto); cuenta1.recibirTransferencia(monto); break;
							case 2: cuenta30.transferir(cuenta2.getBloqueada(), cuenta2.getActiva(), monto); cuenta2.recibirTransferencia(monto); break;
							case 3: cuenta30.transferir(cuenta3.getBloqueada(), cuenta3.getActiva(), monto); cuenta3.recibirTransferencia(monto); break;
							case 4: cuenta30.transferir(cuenta4.getBloqueada(), cuenta4.getActiva(), monto); cuenta4.recibirTransferencia(monto); break;
							case 5: cuenta30.transferir(cuenta5.getBloqueada(), cuenta5.getActiva(), monto); cuenta5.recibirTransferencia(monto); break;
							case 6: cuenta30.transferir(cuenta6.getBloqueada(), cuenta6.getActiva(), monto); cuenta6.recibirTransferencia(monto); break;
							case 7: cuenta30.transferir(cuenta7.getBloqueada(), cuenta7.getActiva(), monto); cuenta7.recibirTransferencia(monto); break;
							case 8: cuenta30.transferir(cuenta8.getBloqueada(), cuenta8.getActiva(), monto); cuenta8.recibirTransferencia(monto); break;
							case 9: cuenta30.transferir(cuenta9.getBloqueada(), cuenta9.getActiva(), monto); cuenta9.recibirTransferencia(monto); break;
							case 10: cuenta30.transferir(cuenta10.getBloqueada(), cuenta10.getActiva(), monto); cuenta10.recibirTransferencia(monto); break;
							case 11: cuenta30.transferir(cuenta11.getBloqueada(), cuenta11.getActiva(), monto); cuenta11.recibirTransferencia(monto); break;
							case 12: cuenta30.transferir(cuenta12.getBloqueada(), cuenta12.getActiva(), monto); cuenta12.recibirTransferencia(monto); break;
							case 13: cuenta30.transferir(cuenta13.getBloqueada(), cuenta13.getActiva(), monto); cuenta13.recibirTransferencia(monto); break;
							case 14: cuenta30.transferir(cuenta14.getBloqueada(), cuenta14.getActiva(), monto); cuenta14.recibirTransferencia(monto); break;
							case 15: cuenta30.transferir(cuenta15.getBloqueada(), cuenta15.getActiva(), monto); cuenta15.recibirTransferencia(monto); break;
							case 16: cuenta30.transferir(cuenta16.getBloqueada(), cuenta16.getActiva(), monto); cuenta16.recibirTransferencia(monto); break;
							case 17: cuenta30.transferir(cuenta17.getBloqueada(), cuenta17.getActiva(), monto); cuenta17.recibirTransferencia(monto); break;
							case 18: cuenta30.transferir(cuenta18.getBloqueada(), cuenta18.getActiva(), monto); cuenta18.recibirTransferencia(monto); break;
							case 19: cuenta30.transferir(cuenta19.getBloqueada(), cuenta19.getActiva(), monto); cuenta19.recibirTransferencia(monto); break;
							case 20: cuenta30.transferir(cuenta20.getBloqueada(), cuenta20.getActiva(), monto); cuenta20.recibirTransferencia(monto); break;
							case 21: cuenta30.transferir(cuenta21.getBloqueada(), cuenta21.getActiva(), monto); cuenta21.recibirTransferencia(monto); break;
							case 22: cuenta30.transferir(cuenta22.getBloqueada(), cuenta22.getActiva(), monto); cuenta22.recibirTransferencia(monto); break;
							case 23: cuenta30.transferir(cuenta23.getBloqueada(), cuenta23.getActiva(), monto); cuenta23.recibirTransferencia(monto); break;
							case 24: cuenta30.transferir(cuenta24.getBloqueada(), cuenta24.getActiva(), monto); cuenta24.recibirTransferencia(monto); break;
							case 25: cuenta30.transferir(cuenta25.getBloqueada(), cuenta25.getActiva(), monto); cuenta25.recibirTransferencia(monto); break;
							case 26: cuenta30.transferir(cuenta26.getBloqueada(), cuenta26.getActiva(), monto); cuenta26.recibirTransferencia(monto); break;
							case 27: cuenta30.transferir(cuenta27.getBloqueada(), cuenta27.getActiva(), monto); cuenta27.recibirTransferencia(monto); break;
							case 28: cuenta30.transferir(cuenta28.getBloqueada(), cuenta28.getActiva(), monto); cuenta28.recibirTransferencia(monto); break;
							case 29: cuenta30.transferir(cuenta29.getBloqueada(), cuenta29.getActiva(), monto); cuenta29.recibirTransferencia(monto); break;
							case 30: /* no se incluye, misma cuenta de origen */ break;
							} break;

						}
					}
					break;
				case 4: //Mostrar Saldo
					system("cls");
					switch (numeroCuenta) {
					case 1: cuenta1.mostrarSaldo(numeroCuenta); break;
					case 2: cuenta2.mostrarSaldo(numeroCuenta); break;
					case 3: cuenta3.mostrarSaldo(numeroCuenta); break;
					case 4: cuenta4.mostrarSaldo(numeroCuenta); break;
					case 5: cuenta5.mostrarSaldo(numeroCuenta); break;
					case 6: cuenta6.mostrarSaldo(numeroCuenta); break;
					case 7: cuenta7.mostrarSaldo(numeroCuenta); break;
					case 8: cuenta8.mostrarSaldo(numeroCuenta); break;
					case 9: cuenta9.mostrarSaldo(numeroCuenta); break;
					case 10: cuenta10.mostrarSaldo(numeroCuenta); break;
					case 11: cuenta11.mostrarSaldo(numeroCuenta); break;
					case 12: cuenta12.mostrarSaldo(numeroCuenta); break;
					case 13: cuenta13.mostrarSaldo(numeroCuenta); break;
					case 14: cuenta14.mostrarSaldo(numeroCuenta); break;
					case 15: cuenta15.mostrarSaldo(numeroCuenta); break;
					case 16: cuenta16.mostrarSaldo(numeroCuenta); break;
					case 17: cuenta17.mostrarSaldo(numeroCuenta); break;
					case 18: cuenta18.mostrarSaldo(numeroCuenta); break;
					case 19: cuenta19.mostrarSaldo(numeroCuenta); break;
					case 20: cuenta20.mostrarSaldo(numeroCuenta); break;
					case 21: cuenta21.mostrarSaldo(numeroCuenta); break;
					case 22: cuenta22.mostrarSaldo(numeroCuenta); break;
					case 23: cuenta23.mostrarSaldo(numeroCuenta); break;
					case 24: cuenta24.mostrarSaldo(numeroCuenta); break;
					case 25: cuenta25.mostrarSaldo(numeroCuenta); break;
					case 26: cuenta26.mostrarSaldo(numeroCuenta); break;
					case 27: cuenta27.mostrarSaldo(numeroCuenta); break;
					case 28: cuenta28.mostrarSaldo(numeroCuenta); break;
					case 29: cuenta29.mostrarSaldo(numeroCuenta); break;
					case 30: cuenta30.mostrarSaldo(numeroCuenta); break;
					}
					break;
				case 5: //Mostrar Informacion de la cuenta
					system("cls");
					cabecera();
					switch (numeroCuenta) {
					case 1: cuenta1.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 2: cuenta2.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 3: cuenta3.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 4: cuenta4.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 5: cuenta5.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 6: cuenta6.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 7: cuenta7.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 8: cuenta8.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 9: cuenta9.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 10: cuenta10.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 11: cuenta11.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 12: cuenta12.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 13: cuenta13.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 14: cuenta14.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 15: cuenta15.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 16: cuenta16.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 17: cuenta17.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 18: cuenta18.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 19: cuenta19.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 20: cuenta20.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 21: cuenta21.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 22: cuenta22.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 23: cuenta23.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 24: cuenta24.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 25: cuenta25.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 26: cuenta26.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 27: cuenta27.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 28: cuenta28.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 29: cuenta29.mostrarInformacionDeCuenta(numeroCuenta); break;
					case 30: cuenta30.mostrarInformacionDeCuenta(numeroCuenta); break;

					}
					pie();
					break;
				case 6: //Verificar Inactividad
					system("cls");
					cout << "Verificando inactividad de la cuenta " << numeroCuenta << "...\n";
					switch (numeroCuenta) {
					case 1: cuenta1.verificarInactividad(); break;
					case 2: cuenta2.verificarInactividad(); break;
					case 3: cuenta3.verificarInactividad(); break;
					case 4: cuenta4.verificarInactividad(); break;
					case 5: cuenta5.verificarInactividad(); break;
					case 6: cuenta6.verificarInactividad(); break;
					case 7: cuenta7.verificarInactividad(); break;
					case 8: cuenta8.verificarInactividad(); break;
					case 9: cuenta9.verificarInactividad(); break;
					case 10: cuenta10.verificarInactividad(); break;
					case 11: cuenta11.verificarInactividad(); break;
					case 12: cuenta12.verificarInactividad(); break;
					case 13: cuenta13.verificarInactividad(); break;
					case 14: cuenta14.verificarInactividad(); break;
					case 15: cuenta15.verificarInactividad(); break;
					case 16: cuenta16.verificarInactividad(); break;
					case 17: cuenta17.verificarInactividad(); break;
					case 18: cuenta18.verificarInactividad(); break;
					case 19: cuenta19.verificarInactividad(); break;
					case 20: cuenta20.verificarInactividad(); break;
					case 21: cuenta21.verificarInactividad(); break;
					case 22: cuenta22.verificarInactividad(); break;
					case 23: cuenta23.verificarInactividad(); break;
					case 24: cuenta24.verificarInactividad(); break;
					case 25: cuenta25.verificarInactividad(); break;
					case 26: cuenta26.verificarInactividad(); break;
					case 27: cuenta27.verificarInactividad(); break;
					case 28: cuenta28.verificarInactividad(); break;
					case 29: cuenta29.verificarInactividad(); break;
					case 30: cuenta30.verificarInactividad(); break;

					}
					break;
				case 7: //Salir al menu de seleccion
					cout << "Regresando al menu de seleccion de cuenta...\n";
					break;
				default:
					cout << "Opcion invalida en el menu de operaciones.\n";
					break;
				}
				system("pause");
			} while (opcionOperacion != 7);

			break;
		case 2:
			cabecera();
			cuenta1.mostrarInformacionDeCuenta(1);
			cuenta2.mostrarInformacionDeCuenta(2);
			cuenta3.mostrarInformacionDeCuenta(3);
			cuenta4.mostrarInformacionDeCuenta(4);
			cuenta5.mostrarInformacionDeCuenta(5);
			cuenta6.mostrarInformacionDeCuenta(6);
			cuenta7.mostrarInformacionDeCuenta(7);
			cuenta8.mostrarInformacionDeCuenta(8);
			cuenta9.mostrarInformacionDeCuenta(9);
			cuenta10.mostrarInformacionDeCuenta(10);
			cuenta11.mostrarInformacionDeCuenta(11);
			cuenta12.mostrarInformacionDeCuenta(12);
			cuenta13.mostrarInformacionDeCuenta(13);
			cuenta14.mostrarInformacionDeCuenta(14);
			cuenta15.mostrarInformacionDeCuenta(15);
			cuenta16.mostrarInformacionDeCuenta(16);
			cuenta17.mostrarInformacionDeCuenta(17);
			cuenta18.mostrarInformacionDeCuenta(18);
			cuenta19.mostrarInformacionDeCuenta(19);
			cuenta20.mostrarInformacionDeCuenta(20);
			cuenta21.mostrarInformacionDeCuenta(21);
			cuenta22.mostrarInformacionDeCuenta(22);
			cuenta23.mostrarInformacionDeCuenta(23);
			cuenta24.mostrarInformacionDeCuenta(24);
			cuenta25.mostrarInformacionDeCuenta(25);
			cuenta26.mostrarInformacionDeCuenta(26);
			cuenta27.mostrarInformacionDeCuenta(27);
			cuenta28.mostrarInformacionDeCuenta(28);
			cuenta29.mostrarInformacionDeCuenta(29);
			cuenta30.mostrarInformacionDeCuenta(30);

			pie();


			break;
		case 3:
			cout << "Saliendo del sistema...\n";
			break;
		default:
			cout << "Opcion invalida, intentelo de nuevo...\n";
			break;
		}
		system("pause");
	} while (opcionSeleccion != 3);


	return 0;
}
