# 🏦 Simulación de Cuentas Bancarias en C++

## 📌 Descripción

Este proyecto es una **simulación de un sistema de cuentas bancarias**, desarrollado en **C++**. Permite a los usuarios **depositar, retirar y consultar saldo** en una de las 30 cuentas disponibles. Se enfoca en la aplicación de **estructuras de control, clases y archivos de encabezado en C++**.

## 🎯 Objetivos del Laboratorio

✅ Aplicar el **uso de estructuras de control `switch` y `do-while`**.  
✅ Explorar la **creación e instanciación de objetos** en C++.  
✅ Implementar **clases y encapsulación** para gestionar datos de manera estructurada.  
✅ Utilizar **archivos `.h` y `.cpp` separados** para mejorar la modularidad del código.

## 🏗️ Estructura del Código

### 🔹 **1. `cuentas.h` (Definición de la clase `CuentaBancaria`)**

- Declara la clase `CuentaBancaria` con un **atributo privado `saldo`**.
- Métodos públicos:
  - `depositar(double monto)`: Aumenta el saldo.
  - `retirar(double monto)`: Disminuye el saldo si hay fondos suficientes.
  - `mostrarSaldo()`: Muestra el saldo actual.

### 🔹 **2. `cuentas.cpp` (Implementación de `CuentaBancaria`)**

- Contiene la implementación de los métodos de `CuentaBancaria`.
- **Validaciones**:
  - No permite depositar montos negativos.
  - Evita retiros mayores al saldo disponible.

### 🔹 **3. `main.cpp` (Interfaz del Usuario y Menús)**

- Muestra un menú de selección de cuenta (`menuSeleccionCuenta()`).
- Dentro de cada cuenta, ofrece un menú de operaciones (`menuOperacionesCuenta()`):
  - `1. Depositar`
  - `2. Retirar`
  - `3. Mostrar saldo`
  - `4. Regresar al menú principal`
- Usa **estructuras `switch-case` y `do-while`** para gestionar la interacción.

## 🏦 Funcionalidades Implementadas

✅ **Selección de cuenta**: Permite elegir una cuenta bancaria entre 30 disponibles.  
✅ **Depósito de dinero**: Agrega fondos a la cuenta seleccionada.  
✅ **Retiro de dinero**: Disminuye el saldo si hay fondos suficientes.  
✅ **Consulta de saldo**: Muestra el saldo actual de la cuenta.  
✅ **Gestión de múltiples cuentas**: Cada cuenta opera de manera independiente.
