/*
Creado por : Anthony Viteri
GitHub : https://github.com/AnthonyViteri/Arduino
*/
//PWM tienen una escritura analogica: resolucion de 8bits: 0-255
int led = 6;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  for(int i=0;i<256;i++){
    Serial.println(i);
    analogWrite(led,i);
    delay(5);
  }
  for(int i=255;i>=0;i--){
    Serial.println(i);
    analogWrite(led,i);
    delay(5);
  }  
}
