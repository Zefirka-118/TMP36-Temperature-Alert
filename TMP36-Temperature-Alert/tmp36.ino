int sensor = A0;     // sensor TMP36
int buzzer = 8;      // buzzer conectado al pin 8

float temperatura;
int limite = 30;     // temperatura límite en °C

void setup() {

  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

}

void loop() {

  int valor = analogRead(sensor);

  float voltaje = valor * (5.0 / 1023.0);

  // conversión para TMP36
  temperatura = (voltaje - 0.5) * 100;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  if (temperatura > limite) {

    tone(buzzer, 1000);   // alarma

  } else {

    noTone(buzzer);       // silencio

  }

  delay(1000);
}