//Definimos nuestras constantes
#define tiempo 250 

int i=0;
void setup() {
  // put your setup code here, to run once:

  //Declaramos los pines como salidas
  for(i=0;i<5;i++)  //Ciclo de 0 a 4

  pinMode(i,OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:

  /*
  Encendemos un pin, esperamos, apagamos el pin y esperamos
  Asi con los 5 pines de manera consecutiva
  0,1,2,3,4
  */

  digitalWrite(0,HIGH); //Encendemos pin 0

  delay(tiempo);    //Esperamos 250 milisegundos

  digitalWrite(0,LOW); //Apagamos pin 0

  delay(tiempo);    //Esperamos 250 milisegundos

  digitalWrite(1,HIGH);

  delay(tiempo);

  digitalWrite(1,LOW);

  delay(tiempo);

  digitalWrite(2,HIGH);

  delay(tiempo);

  digitalWrite(2,LOW);

  delay(tiempo);

  digitalWrite(3,HIGH);

  delay(tiempo);

  digitalWrite(3,LOW);

  delay(tiempo);

  digitalWrite(4,HIGH);

  delay(tiempo);

  digitalWrite(4,LOW);

  delay(tiempo);   

}
