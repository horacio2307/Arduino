//Definimos constantes
#define Rele 5
#define Tiempo 1000
void setup() {
  // put your setup code here, to run once:

  pinMode(Rele,OUTPUT); //Declaramos pin 5 como salida

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Rele,HIGH); //Activamos Rele

  delay(Tiempo);    //Esperamos

  digitalWrite(Rele,LOW);   //Desactivamos Rele

  delay(Tiempo);    //Esperamos

}
