//Definimos nuestras constantes
#define Led 5

void setup() {
  // put your setup code here, to run once:
  //Configuramos el pin 5 como salida
  pinMode(Led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Led,HIGH); //Establecemos en estado alto (5V) el pin 5

  delay(1000);  //Hacemos una pausa de 1000 ms

  digitalWrite(Led,LOW);  //Establecemos en estado bajo (0V) el pin 5

  delay(1000);  //Hacemos una pausa de 1000 ms

}
