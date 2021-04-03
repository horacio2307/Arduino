//Definimos nuestras constantes
#define PWM_Led 9

float pwm=0;


void setup() {
  // put your setup code here, to run once:

  //Declaramos el pin 9 como salida
  pinMode(PWM_Led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //De 0 a 100 escribiremos el valor del pwm
  for(pwm=0;pwm<=100;pwm++) {
  //Escribimos ese pwm en el pin digital 9
  analogWrite(PWM_Led,pwm);
  //Esperamos 50 milisegundos
  delay(50);
  }

  //Esperamos 2 segundos
  delay(2000);
  
  //De 100 a 0 escribiremos el valor del pwm
  for(pwm=100;pwm>=0;pwm--) {
  //Escribimos ese pwm en el pin digital 9
  analogWrite(PWM_Led,pwm);
  //Esperamos 50 milisegundos
  delay(50);
  }
  //Esperamos 2 segundos
  delay(2000);
}
