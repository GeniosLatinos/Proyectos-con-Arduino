// GeniosLatinos.com 
float vPow = 4.7;
float r1 = 100000; //Valor de la resitencia 1 100kΩ
float r2 = 10000;  //Valor de la resitencia 2 10kΩ

void setup() {
  Serial.begin(9600);
  Serial.println("------GeniosLatinos-----");
  Serial.println("VOLTIMETRO DE VOLTAGE DC");
  Serial.print("VOLTAGE MAXIMO: ");
  Serial.print((int)(vPow / (r2 / (r1 + r2))));
  Serial.println("V");
  Serial.println("------GeniosLatinos-----");
  Serial.println("");
  delay(2000);
}
void loop() {
  float v = (analogRead(0) * vPow) / 1024.0;
  float v2 = v / (r2 / (r1 + r2));
  Serial.print("Voltage: ");
  Serial.print(v2);
  Serial.println(" V");
  delay (1000);
}

