/*
Creado por : Anthony Viteri
GitHub : https://github.com/AnthonyViteri/Arduino
*/
int pin[]={2,3,6,7}; //Declaramos una lista con los pines de los leds de salida
int delayt=500;
void setup() {
  for(int i=0;i<4;i++){//Declaramos pines de salida
    pinMode(pin[i],OUTPUT);
  }
}

void loop() {
  //0
  digitalWrite(pin[0],LOW);
  digitalWrite(pin[1],LOW);
  digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //1
  digitalWrite(pin[0],HIGH);
  digitalWrite(pin[1],LOW);
  digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //2
  digitalWrite(pin[0],LOW);
  digitalWrite(pin[1],HIGH);
  digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //3
  digitalWrite(pin[0],HIGH);
  digitalWrite(pin[1],HIGH);
  digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //4
  digitalWrite(pin[0],LOW);
  digitalWrite(pin[1],LOW);
  digitalWrite(pin[2],HIGH);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //5
  digitalWrite(pin[0],HIGH);
  digitalWrite(pin[1],LOW);
  digitalWrite(pin[2],HIGH);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //6
  digitalWrite(pin[0],LOW);
  digitalWrite(pin[1],HIGH);
  digitalWrite(pin[2],HIGH);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //7 
  digitalWrite(pin[0],HIGH);
  digitalWrite(pin[1],HIGH);
  digitalWrite(pin[2],HIGH);
  digitalWrite(pin[3],LOW);
  delay(delayt);
  //8
  digitalWrite(pin[0],LOW);
  digitalWrite(pin[1],LOW);
  digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],HIGH);
  delay(delayt);
}
