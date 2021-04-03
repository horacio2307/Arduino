
//Definimos nuestras constantes
#define PWM 9
#define Pot A0

float pwm=0;

void setup() {
  // put your setup code here, to run once:

  //Declaramos el pin 9 como salida
  pinMode(PWM,OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Guardamos en la varibale pwm el valor leido por el pin analogico A0
  pwm=analogRead(Pot);

  /*convertimos ese valor de un rango de [0,1023] a uno de [0,255]
  255 es el valor maximo que podamos sacar como pwm
  */
  pwm=map(pwm,0,1023,0,255);

  //Escribimos ese pwm en el pin digital 9
  analogWrite(PWM,pwm);

  Serial.print("pwm= ");
  Serial.println(pwm);

  delay(0.1);

}
