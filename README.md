# Arduino Temperature Alarm

This README contains documentation in two languages: **Spanish and English**.

---

# Español

## Descripción

Este proyecto consiste en un **sistema simple de alarma de temperatura** desarrollado con Arduino.
El sistema utiliza un sensor de temperatura para medir el ambiente y activar una alarma sonora cuando la temperatura supera un límite definido en el código.

El proyecto fue desarrollado originalmente por mi durante sus estudios en **preparatoria**, y posteriormente fue recreado como parte de su portafolio y documentación de proyectos.

---

## Simulación

El circuito puede visualizarse en la siguiente simulación de Tinkercad:

https://www.tinkercad.com/things/fXvH7gprCiW/editel?returnTo=%2Fdashboard

---

## Materiales

* Arduino Uno
* Sensor de temperatura TMP36
* Buzzer
* Protoboard
* Cables jumper

---

## Funcionamiento del sistema

El sistema se basa en la lectura de un sensor de temperatura analógico.

1. El sensor TMP36 genera un voltaje proporcional a la temperatura.
2. El Arduino lee este voltaje mediante el pin analógico **A0**.
3. El valor analógico se convierte a voltaje.
4. El voltaje se transforma a temperatura en grados Celsius.
5. El programa compara la temperatura con un valor límite.
6. Si la temperatura supera ese límite, se activa un buzzer como alarma.

Este proceso se repite continuamente dentro del ciclo principal del programa (`loop`).

---

## Lógica del programa

El programa realiza tres operaciones principales:

### Lectura del sensor

El Arduino obtiene el valor analógico del sensor mediante:

analogRead(A0)

---

### Conversión de voltaje

El valor leído se convierte a voltaje utilizando la relación del convertidor analógico-digital del Arduino.

voltaje = valor * (5.0 / 1023.0)

---

### Conversión a temperatura

Para el sensor TMP36 se utiliza la siguiente fórmula:

temperatura = (voltaje - 0.5) * 100

---

### Activación de la alarma

El programa compara la temperatura con un límite definido.

Si la temperatura supera el límite:

* se activa el buzzer mediante `tone()`

Si la temperatura es menor o igual al límite:

* el buzzer se desactiva mediante `noTone()`

---

## Propósito del proyecto

Este proyecto demuestra conceptos básicos de sistemas embebidos:

* lectura de sensores analógicos
* conversión de señales eléctricas a magnitudes físicas
* uso de condicionales para control de sistemas
* activación de dispositivos de salida

También sirve como ejemplo introductorio para el desarrollo de sistemas de monitoreo ambiental o alarmas térmicas.

---

# English

## Description

This project implements a **simple temperature alarm system** using Arduino.
The system reads temperature values from a sensor and activates a buzzer when the temperature exceeds a predefined threshold.

The project was originally built by me during **high school**, and later recreated as part of a personal portfolio and documentation effort.

---

## Simulation

The circuit can be viewed in the following Tinkercad simulation:

https://www.tinkercad.com/things/fXvH7gprCiW/editel?returnTo=%2Fdashboard

---

## Components

* Arduino Uno
* TMP36 temperature sensor
* Buzzer
* Breadboard
* Jumper wires

---

## System operation

The system operates by reading temperature data from an analog sensor.

1. The TMP36 sensor outputs a voltage proportional to the ambient temperature.
2. Arduino reads this voltage using analog pin **A0**.
3. The analog value is converted into voltage.
4. The voltage is converted into temperature in Celsius.
5. The program compares the measured temperature with a predefined threshold.
6. If the temperature exceeds that threshold, the buzzer is activated.

This process runs continuously inside the main program loop (`loop`).

---

## Program logic

The program performs three main tasks.

### Sensor reading

The Arduino reads the analog value from the sensor:

analogRead(A0)

---

### Voltage conversion

The analog value is converted into voltage using the Arduino ADC relationship.

voltage = value * (5.0 / 1023.0)

---

### Temperature conversion

For the TMP36 sensor the following formula is used:

temperature = (voltage - 0.5) * 100

---

### Alarm activation

The measured temperature is compared with a defined threshold.

If the temperature exceeds the limit:

* the buzzer is activated using `tone()`

If the temperature is below the limit:

* the buzzer is disabled using `noTone()`

---

## Project purpose

This project demonstrates basic embedded systems concepts:

* analog sensor reading
* conversion from electrical signals to physical measurements
* conditional logic for system control
* activation of output devices

It also serves as an introductory example for environmental monitoring or thermal alarm systems.
