/*
Creado por : Anthony Viteri
GitHub : https://github.com/AnthonyViteri/Arduino
*/
int pot = A0, value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  value = analogRead(pot);
  Serial.print("Valor: ");
  Serial.println(value);
}
