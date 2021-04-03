/*
  XOR
  A B F
  0 0 0
  0 1 1
  1 0 1
  1 1 0
*/

//Definimos nuestras constantes
#define A 2
#define B 4
#define F 7

int a=0,b=0;
void setup() {
  // put your setup code here, to run once:

  //Declaramos los pines como Entradas/salidas
  pinMode(A,INPUT);
  pinMode(B,INPUT);
  pinMode(F,OUTPUT);
  
  //Activamos las resistencias pull-up

  digitalWrite(A,1);
  digitalWrite(B,1);
}

void loop() {
  // put your main code here, to run repeatedly:

  a=digitalRead(A);
  b=digitalRead(B);
 
  if(a==0 && b==0)  //si 00 ->0

  digitalWrite(F,0);

  if(a==0 && b==1)  //si 01 ->1

  digitalWrite(F,1);

  if(a==1 && b==0)  //si 10 ->1

  digitalWrite(F,1);

  if(a==1 && b==1)  //si 11 ->0

  digitalWrite(F,0);

}
