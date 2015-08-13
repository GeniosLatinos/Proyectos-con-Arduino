/*
  GeniosLatinos.com
 */
int valor = 0; // variable para conservar el valor actual 
int LEDpin = 11; // Led conectado al pin 11 PWM 

void setup() { // Nada que configurar 
} 
void loop() { 
  for(valor = 0 ; valor <= 255; valor+=5) // Desvanecimiento del led desde el minimo al maximo 
  { 
    analogWrite(LEDpin, valor);
    delay(100); // tiempo para ver el efecto
  } 
  for(valor = 255; valor >=0; valor-=5) // desvanecimiento desde el valor maximo al valor minimo. 
  { 
    analogWrite(LEDpin, valor); 
    delay(100); 
  }
} 

/*
  GeniosLatinos.com
 */

