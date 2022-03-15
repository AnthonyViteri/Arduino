/*
Creado por : Anthony Viteri
GitHub : https://github.com/AnthonyViteri/Arduino
*/
int led = 13;//

void setup() {//Set up se ejecuta una vez
  pinMode(led,OUTPUT); //OUTPUT(SALIDA),INPUT(ENTRADA) 
}

void loop() {// Se ejecuta constantemente
  digitalWrite(led,HIGH);//HIGH(1),LOW(0)
  delay(1000);//(TIEMPO DE ESPERA EN MILISEGUNDOS)
  digitalWrite(led,LOW);
  delay(1000);
}
