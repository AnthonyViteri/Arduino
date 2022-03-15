/*
Creado por : Anthony Viteri
GitHub : https://github.com/AnthonyViteri/Arduino
*/
int pot=A0;
float voltage,value;

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
}

void loop() {
  value=analogRead(pot);//Resolucion de 10 bits: 0-1023
  voltage = (value*5)/1023;
  Serial.println(value);
  Serial.print("Voltaje: ");
  Serial.println(voltage);
  delay(1000);
}
