#ifndef CUENTAS_H
#define CUENTAS_H

#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;
    bool activa;              // Estado de la cuenta: activa/inactiva (inciso b)
    bool bloqueada;           // Indica si la cuenta está bloqueada (incisos c y d)
    int intentosFallidos;     // Contador para retiros fallidos (inciso c)
    bool esEspecial;          // Marca la cuenta como especial (inciso j)

    // Límites para advertir sobre saldo bajo (incisos e y f)
    const int LIMITE_BAJO = 100;
    const int LIMITE_ADVERTENCIA = 50;

    // Tasa de interés para aplicar en depósitos (inciso g)
    double tasaInteres;
        
    // Variables para penalización por inactividad (inciso i)
    int contadorInactividad;
    const int MAX_INACTIVIDAD = 5;
    double penalizacionInactividad;

public:
    // Constructor: inicializa la cuenta con saldo, estado activo y si es especial.
    CuentaBancaria(double saldoInicial, bool _activa = true, bool _esEspecial = false);

    // Depositar: 
    // - No permite depósitos si la cuenta está bloqueada o inactiva (incisos b y d).
    // - Aplica una tasa de interés al monto depositado (inciso g).
    void depositar(double monto);

    // Retirar:
    // - Verifica saldo suficiente (inciso a).
    // - No permite retiros si la cuenta está bloqueada o inactiva (incisos b y d).
    // - Bloquea la cuenta tras más de 3 intentos fallidos (inciso c).
    // - No permite retiros de más del 50% del saldo en cuentas especiales (inciso j).
    // - Muestra advertencias si el saldo es bajo (incisos e y f).
    void retirar(double monto);

    // Transferir:
    // - Simula la transferencia entre cuentas (inciso h).
    void transferir(CuentaBancaria& destino, double monto);

    // Verificar inactividad:
    // - Aplica penalización si la cuenta ha estado inactiva (inciso i).
    void verificarInactividad();

    // Mostrar el saldo y el estado de la cuenta.
    void mostrarSaldo();

    // Métodos para modificar el estado de la cuenta.
    void setActiva(bool estado);
    void setEspecial(bool estado);
};

#endif // CUENTAS_H
