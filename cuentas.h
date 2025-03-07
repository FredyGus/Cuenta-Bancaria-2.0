#ifndef CUENTAS_H
#define CUENTAS_H

#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;
    bool activa;              // Estado de la cuenta: activa/inactiva (inciso b)
    bool bloqueada;           // Indica si la cuenta est� bloqueada (incisos c y d)
    int intentosFallidos;     // Contador para retiros fallidos (inciso c)
    bool esEspecial;          // Marca la cuenta como especial (inciso j)

    // L�mites para advertir sobre saldo bajo (incisos e y f)
    const int LIMITE_BAJO = 100;
    const int LIMITE_ADVERTENCIA = 50;

    // Tasa de inter�s para aplicar en dep�sitos (inciso g)
    double tasaInteres;
        
    // Variables para penalizaci�n por inactividad (inciso i)
    int contadorInactividad;
    const int MAX_INACTIVIDAD = 5;
    double penalizacionInactividad;

public:
    // Constructor: inicializa la cuenta con saldo, estado activo y si es especial.
    CuentaBancaria(double saldoInicial, bool _activa = true, bool _esEspecial = false);

    // Depositar: 
    // - No permite dep�sitos si la cuenta est� bloqueada o inactiva (incisos b y d).
    // - Aplica una tasa de inter�s al monto depositado (inciso g).
    void depositar(double monto);

    // Retirar:
    // - Verifica saldo suficiente (inciso a).
    // - No permite retiros si la cuenta est� bloqueada o inactiva (incisos b y d).
    // - Bloquea la cuenta tras m�s de 3 intentos fallidos (inciso c).
    // - No permite retiros de m�s del 50% del saldo en cuentas especiales (inciso j).
    // - Muestra advertencias si el saldo es bajo (incisos e y f).
    void retirar(double monto);

    // Transferir:
    // - Simula la transferencia entre cuentas (inciso h).
    void transferir(CuentaBancaria& destino, double monto);

    // Verificar inactividad:
    // - Aplica penalizaci�n si la cuenta ha estado inactiva (inciso i).
    void verificarInactividad();

    // Mostrar el saldo y el estado de la cuenta.
    void mostrarSaldo();

    // M�todos para modificar el estado de la cuenta.
    void setActiva(bool estado);
    void setEspecial(bool estado);
};

#endif // CUENTAS_H
