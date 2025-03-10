# Gestión de Cuentas Bancarias en C++

Este proyecto es una implementación en C++ que simula la gestión de 30 cuentas bancarias, cumpliendo con una serie de restricciones y funcionalidades específicas, definidas en los incisos (a) a (j) de las instrucciones del proyecto. Cada funcionalidad se ha implementado en métodos individuales de la clase `CuentaBancaria`.

> **Nota:**  
> Por requerimiento del ejercicio, **no se usan arreglos, vectores ni punteros** para gestionar las cuentas. Cada cuenta se declara de forma individual, lo que genera un código extenso y repetitivo. Este enfoque es intencional para el aprendizaje, aunque no sea lo óptimo en aplicaciones reales.

## Funcionalidades y Restricciones Implementadas

Cada inciso se implementa en uno o más métodos de la clase:

- **(a) Verificar saldo antes de retirar:**  
  La función `retirar()` comprueba que la cuenta tenga suficiente saldo antes de efectuar un retiro. Si el saldo es insuficiente, se incrementa un contador de intentos fallidos.

- **(b) No permitir depósitos en cuentas inactivas:**  
  La función `depositar()` verifica el estado de la cuenta. Si la cuenta está inactiva, no se permite realizar depósitos.

- **(c) Bloquear la cuenta tras más de 3 intentos fallidos de retiro:**  
  Si en `retirar()` se superan 3 intentos fallidos (por saldo insuficiente), la cuenta se bloquea, impidiendo futuras operaciones.

- **(d) No permitir retiros ni depósitos en cuentas bloqueadas:**  
  Tanto `depositar()` como `retirar()` incluyen validaciones para evitar operaciones cuando la cuenta se encuentra bloqueada.

- **(e) Mostrar advertencia si el saldo es bajo:**  
  Durante un retiro, se muestra un mensaje de advertencia si el saldo cae por debajo de un umbral predefinido.

- **(f) Generar mensaje de advertencia si el saldo es menor a cierto límite:**  
  Se define un límite crítico y, si el saldo es menor a ese valor, se emite una advertencia de “saldo extremadamente bajo”.

- **(g) Aplicar tasas de interés en depósitos:**  
  La función `depositar()` aplica una tasa de interés (por ejemplo, 2%) al monto depositado, aumentando el saldo de la cuenta.

- **(h) Simular transferencias entre cuentas:**  
  La función `transferir()` simula el envío de fondos de una cuenta a otra, validando el estado y saldo de ambas cuentas.

- **(i) Aplicar penalización por inactividad:**  
  La función `verificarInactividad()` lleva un contador de inactividad y, al alcanzar un límite, descuenta una penalización del saldo.

- **(j) No permitir retiros ni transferencias en cuentas especiales:**  
  Las cuentas marcadas como especiales solo permiten depósitos. Los métodos `retirar()` y `transferir()` validan esta condición y evitan realizar estas operaciones.

## Estructura del Proyecto

El proyecto está dividido en tres archivos principales:

- **`cuentas.h`**  
  - Declara la clase `CuentaBancaria` con todos sus atributos (saldo, estado, contadores, etc.) y la firma de sus métodos.
  - Define constantes y parámetros necesarios para las validaciones de cada inciso.

- **`cuentas.cpp`**  
  - Implementa los métodos declarados en `cuentas.h`.
  - Aquí se desarrolla la lógica de cada funcionalidad:  
    - `depositar()`: Realiza el depósito, aplicando el interés y verificando el estado de la cuenta (incisos b, g, y d).  
    - `retirar()`: Realiza el retiro, verifica el saldo, controla intentos fallidos, bloquea la cuenta si es necesario y muestra advertencias (incisos a, c, d, e, f y j).  
    - `transferir()`: Simula la transferencia de fondos entre cuentas (inciso h y j).  
    - `verificarInactividad()`: Aplica la penalización si la cuenta ha estado inactiva (inciso i).  
    - Otros métodos de consulta y modificación del estado (por ejemplo, para marcar una cuenta como especial o inactiva).

- **`main.cpp`**  
  - Declara 30 objetos individuales de `CuentaBancaria`, cada uno representando una cuenta con su configuración inicial (por ejemplo, saldo 1500, estado activo/inactivo, especial o normal).
  - Implementa un menú principal y submenús que permiten:
    - Seleccionar la cuenta de origen.
    - Elegir la operación deseada: depositar, retirar, transferir, mostrar saldo, o verificar inactividad.
  - Debido a la restricción de **no usar arreglos ni punteros**, se utiliza una gran cantidad de sentencias `switch` para dirigir la operación a la cuenta correcta.
