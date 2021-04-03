//Definimos constantes
#define PinServo 9
#define Pot A2

//Incluimos libreria para controlar el servo
#include <Servo.h>

//Creamos un objeto llamdo MotorServo de la clase Servo
Servo MotorServo;

//Varibales tipo enteras
int ValorPot=0, PosicionServo=0;

void setup() {
  // put your setup code here, to run once:
  //vinculamos el objeto MotorServo con el pin 9 (Este pin siempre debe de ser pwm) 
  MotorServo.attach(PinServo); 

}

void loop() {
  // put your main code here, to run repeatedly:
  //La variable ValorPot es igual al valor leido por el pin analogico A2
  ValorPot = analogRead(Pot);  
  //Transformamos ValorPot de [0,1023] a [0,180] y lo guardamos en PosicionServo
  PosicionServo = map(ValorPot,0,1023,0,180);  
  //Escribimos el valor PosicionServo en el objeto MotorServo utilizando la funcion write
  MotorServo.write(PosicionServo);  

  delay(15);  //Esperamos 15 milisegundos
}
