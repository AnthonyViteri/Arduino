#include <PID_v1.h>

#define PIN_INPUT 0
#define PIN_OUTPUT 3

//variables del motor

int PulsosRev = 24;
volatile int contpulsos = 0;
unsigned int pulsos = 0;
unsigned long Time = 0; 
unsigned int RPM = 0;

int pot=0;
int motor=3;
int sensor=2;
int valorpot=0;
int RPMdeseada = 0;

double Setpoint, Input, Output, VelocidadSetpoint;

double Kp=0.5, Ki=0.5, Kd=0.05;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup()
{
  Serial.begin(9600);

  //codigo motor setup
  
  pinMode(sensor,INPUT);
  pinMode(pot,INPUT);
  pinMode(motor,OUTPUT);
  Time=millis();
  attachInterrupt(digitalPinToInterrupt(sensor), encoder, CHANGE);
  
  //turn the PID on
  myPID.SetMode(AUTOMATIC);

}

void loop()
{
  valorpot = analogRead(pot);
  RPMdeseada = map(valorpot,0,1023,0,255);
  Setpoint = RPMdeseada;
   
  //CODIGO MOTOR

  if(millis()-Time>=1000){
    pulsos=contpulsos;
    RPM=60*pulsos/PulsosRev;
    Serial.print("Revoluciones por minuto:");
    Serial.println(RPM);
    Serial.print("RPM deseada: ");
    Serial.println(RPMdeseada); 
    //se reestablecen los valores
    contpulsos = 0;
    pulsos = 0;
    Time = millis();
    }

  // CODIGO PID
  
   Input = RPM;
   myPID.Compute();  
   analogWrite(motor, Output);
  
}

void encoder()
{
  contpulsos++;
}
