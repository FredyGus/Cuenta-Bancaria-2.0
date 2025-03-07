#include "cuentas.h"
#include <iostream>

using namespace std;

// Constructor: Inicializa la cuenta con los par�metros dados.
// Se establece por defecto: cuenta activa, no bloqueada, sin intentos fallidos,
// y se configura una tasa de inter�s y penalizaci�n por inactividad.
CuentaBancaria::CuentaBancaria(double saldoInicial, bool _activa, bool _esEspecial)
    : saldo(saldoInicial),
    activa(_activa),
    bloqueada(false),
    intentosFallidos(0),
    esEspecial(_esEspecial),
    tasaInteres(0.02),            // 2% de inter�s aplicado en dep�sitos (inciso g)
    contadorInactividad(0),
    penalizacionInactividad(10.0) // Penalizaci�n fija de 10 unidades (inciso i)
{
}

// M�todo para depositar dinero.
// Incisos (b) y (d): No se permite depositar si la cuenta est� inactiva o bloqueada.
// Inciso (g): Se aplica una tasa de inter�s al monto depositado.
void CuentaBancaria::depositar(double monto) {
    if (bloqueada) {
        cout << "La cuenta esta bloqueada. No se puede depositar." << endl;
        return;
    }
    if (!activa) {
        cout << "La cuenta esta inactiva. No se puede depositar." << endl;
        return;
    }
    double interes = monto * tasaInteres;
    saldo += (monto + interes);
    cout << "Deposito exitoso. Se aplico interes: " << interes
        << ". Saldo actual: " << saldo << endl;
    // Reiniciamos el contador de inactividad al operar.
    contadorInactividad = 0;
}

// M�todo para retirar dinero.
// Inciso (a): Verifica que haya saldo suficiente.
// Incisos (b) y (d): No se permite retirar si la cuenta est� inactiva o bloqueada.
// Inciso (c): Se incrementa el contador de intentos fallidos y, si supera 3, se bloquea la cuenta.
// Inciso (j): En cuentas especiales, no se permite retirar m�s del 50% del saldo.
// Incisos (e) y (f): Se muestran advertencias si el saldo es bajo.
void CuentaBancaria::retirar(double monto) {
    if (bloqueada) {
        cout << "La cuenta esta bloqueada. No se puede retirar." << endl;
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
    if (monto > saldo) {
        cout << "Fondos insuficientes. Retiro fallido." << endl;
        intentosFallidos++;
        if (intentosFallidos > 3) {
            bloqueada = true;
            cout << "Cuenta bloqueada por multiples intentos fallidos." << endl;
        }
        return;
    }

    // Retiro exitoso:
    saldo -= monto;
    cout << "Retiro exitoso. Saldo actual: " << saldo << endl;
    // Reiniciamos los contadores de intentos fallidos e inactividad.
    intentosFallidos = 0;
    contadorInactividad = 0;

    // Incisos (e) y (f): Mostrar advertencias seg�n el saldo.
    if (saldo < LIMITE_ADVERTENCIA) {
        cout << "�ADVERTENCIA! Saldo extremadamente bajo." << endl;
    }
    else if (saldo < LIMITE_BAJO) {
        cout << "Advertencia: Saldo bajo." << endl;
    }
}

// M�todo para transferir fondos entre cuentas.
// Inciso (h): Se simula la transferencia validando que ambas cuentas est�n activas
// y que la cuenta origen no est� bloqueada.
void CuentaBancaria::transferir(CuentaBancaria&  destino, double monto) {
    if (bloqueada || !activa) {
        cout << "La cuenta origen no puede realizar transferencias." << endl;
        return;
    }
    if (!destino.activa) {
        cout << "La cuenta destino esta inactiva. No se puede transferir." << endl;
        return;
    }
    if (monto > saldo) {
        cout << "Fondos insuficientes para transferir." << endl;
        return;
    }
    saldo -= monto;
    destino.saldo += monto;
    cout << "Transferencia exitosa. Nuevo saldo: " << saldo << endl;
    contadorInactividad = 0; // Reiniciamos inactividad tras la operaci�n.
}

// M�todo para verificar la inactividad y aplicar penalizaci�n.
// Inciso (i): Si la cuenta ha estado inactiva por MAX_INACTIVIDAD llamadas, se aplica una penalizaci�n.
void CuentaBancaria::verificarInactividad() {
    contadorInactividad++;
    if (contadorInactividad >= MAX_INACTIVIDAD) {
        saldo -= penalizacionInactividad;
        cout << "Se aplico penalizacion por inactividad. Nuevo saldo: " << saldo << endl;
        contadorInactividad = 0;
    }
}

// M�todo para mostrar el saldo y el estado de la cuenta.
void CuentaBancaria::mostrarSaldo() {
    cout << "Saldo: " << saldo << " | ";
    cout << (activa ? "Activa" : "Inactiva") << " | ";
    cout << (bloqueada ? "Bloqueada" : "Desbloqueada") << " | ";
    cout << (esEspecial ? "Cuenta Especial" : "Cuenta Normal") << endl;
}

// M�todo para cambiar el estado de actividad de la cuenta.
void CuentaBancaria::setActiva(bool estado) {
    activa = estado;
}

// M�todo para marcar o desmarcar la cuenta como especial.
void CuentaBancaria::setEspecial(bool estado) {
    esEspecial = estado;
}
