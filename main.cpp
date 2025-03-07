#include <iostream>
#include "cuentas.h"

using namespace std;

void menuSeleccionCuenta() {
	cout << "\n--- MENU DE SELECCION DE CUENTA ---\n";
	cout << "1. Ingresar numero de cuenta\n";
	cout << "2. Salir del sistema\n";
	cout << "Ingrese una opcion: ";
}

void menuOperacionesCuenta(int numCuenta) {
	cout << "\n--- MENU DE CUENTA #" << numCuenta << " ---\n";
	cout << "1. Depositar\n";
	cout << "2. Retirar\n";
	cout << "3. Mostrar saldo\n";
	cout << "4. Regresar al menu de cuentas\n";
	cout << "Ingrese una opcion: ";
}

int main() {
	CuentaBancaria cuenta1(1500);
	CuentaBancaria cuenta2(1500);
	CuentaBancaria cuenta3(1500);
	CuentaBancaria cuenta4(1500);
	CuentaBancaria cuenta5(1500);
	CuentaBancaria cuenta6(1500);
	CuentaBancaria cuenta7(1500);
	CuentaBancaria cuenta8(1500);
	CuentaBancaria cuenta9(1500);
	CuentaBancaria cuenta10(1500);
	CuentaBancaria cuenta11(1500);
	CuentaBancaria cuenta12(1500);
	CuentaBancaria cuenta13(1500);
	CuentaBancaria cuenta14(1500);
	CuentaBancaria cuenta15(1500);
	CuentaBancaria cuenta16(1500);
	CuentaBancaria cuenta17(1500);
	CuentaBancaria cuenta18(1500);
	CuentaBancaria cuenta19(1500);
	CuentaBancaria cuenta20(1500);
	CuentaBancaria cuenta21(1500);
	CuentaBancaria cuenta22(1500);
	CuentaBancaria cuenta23(1500);
	CuentaBancaria cuenta24(1500);
	CuentaBancaria cuenta25(1500);
	CuentaBancaria cuenta26(1500);
	CuentaBancaria cuenta27(1500);
	CuentaBancaria cuenta28(1500);
	CuentaBancaria cuenta29(1500);
	CuentaBancaria cuenta30(1500);

	int opcionSeleccion, opcionOperacion;
	int numCuenta;
	double monto;

	do
	{
		menuSeleccionCuenta();
		cin >> opcionSeleccion;
		switch (opcionSeleccion)
		{
		case 1:
			cout << "Ingrese el numero de cuenta (1-30): ";
			cin >> numCuenta;

			if (numCuenta < 1 || numCuenta >30) {
				cout << "Numero de cuenta invalida..." << endl;
				continue;
			}

			do
			{
				menuOperacionesCuenta(numCuenta);
				cin >> opcionOperacion;

				switch (opcionOperacion)
				{
				case 1: //Depositar
					cout << "Ingrese el monto a depositar: ";
					cin >> monto;
					switch (numCuenta)
					{
					case 1:  cuenta1.depositar(monto); break;
					case 2:  cuenta2.depositar(monto); break;
					case 3:  cuenta3.depositar(monto); break;
					case 4:  cuenta4.depositar(monto); break;
					case 5:  cuenta5.depositar(monto); break;
					case 6:  cuenta6.depositar(monto); break;
					case 7:  cuenta7.depositar(monto); break;
					case 8:  cuenta8.depositar(monto); break;
					case 9:  cuenta9.depositar(monto); break;
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
					cout << "Ingrese el monto a retirar: ";
					cin >> monto;
					switch (numCuenta) {
					case 1:  cuenta1.retirar(monto); break;
					case 2:  cuenta2.retirar(monto); break;
					case 3:  cuenta3.retirar(monto); break;
					case 4:  cuenta4.retirar(monto); break;
					case 5:  cuenta5.retirar(monto); break;
					case 6:  cuenta6.retirar(monto); break;
					case 7:  cuenta7.retirar(monto); break;
					case 8:  cuenta8.retirar(monto); break;
					case 9:  cuenta9.retirar(monto); break;
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
				case 3: //Mostrar saldo
					switch (numCuenta) {
					case 1:  cuenta1.mostrarSaldo(); break;
					case 2:  cuenta2.mostrarSaldo(); break;
					case 3:  cuenta3.mostrarSaldo(); break;
					case 4:  cuenta4.mostrarSaldo(); break;
					case 5:  cuenta5.mostrarSaldo(); break;
					case 6:  cuenta6.mostrarSaldo(); break;
					case 7:  cuenta7.mostrarSaldo(); break;
					case 8:  cuenta8.mostrarSaldo(); break;
					case 9:  cuenta9.mostrarSaldo(); break;
					case 10: cuenta10.mostrarSaldo(); break;
					case 11: cuenta11.mostrarSaldo(); break;
					case 12: cuenta12.mostrarSaldo(); break;
					case 13: cuenta13.mostrarSaldo(); break;
					case 14: cuenta14.mostrarSaldo(); break;
					case 15: cuenta15.mostrarSaldo(); break;
					case 16: cuenta16.mostrarSaldo(); break;
					case 17: cuenta17.mostrarSaldo(); break;
					case 18: cuenta18.mostrarSaldo(); break;
					case 19: cuenta19.mostrarSaldo(); break;
					case 20: cuenta20.mostrarSaldo(); break;
					case 21: cuenta21.mostrarSaldo(); break;
					case 22: cuenta22.mostrarSaldo(); break;
					case 23: cuenta23.mostrarSaldo(); break;
					case 24: cuenta24.mostrarSaldo(); break;
					case 25: cuenta25.mostrarSaldo(); break;
					case 26: cuenta26.mostrarSaldo(); break;
					case 27: cuenta27.mostrarSaldo(); break;
					case 28: cuenta28.mostrarSaldo(); break;
					case 29: cuenta29.mostrarSaldo(); break;
					case 30: cuenta30.mostrarSaldo(); break;
					}
					break;
				case 4: //Regresar al menu seleccion de cuenta 
					cout << "Regresando a la seleccion de cuenta..." << endl;
					break;
				default:
					cout << "Opcion invalida. Intente de nuevo..." << endl;
					break;
				}
			} while (opcionOperacion != 4);
			break;

		case 2:
			cout << "Saliendo del sistema..." << endl;
			break;
		default:
			cout << "Opcion invalida. Intente de nuevo..." << endl;
			break;
		}
	} while (opcionSeleccion != 2);

	return 0;
}