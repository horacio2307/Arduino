#define Pot A0

int i=0;
int valor=0;

void setup() {
  // put your setup code here, to run once:

  //Declaramos los pines como salidas
  for(i=0;i<8;i++)  //Ciclo de 0 a 7

  pinMode(i,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  valor=analogRead(Pot); //Valor es igual a la lectura del pin analogico A0

  valor=map(valor,0,1023,0,7); //convertimos Valor de [0,1023] a un rango de [0,7]

  for(i=0;i<8;i++)   //Ciclo de 0 a 7

  if(i<=valor)

  digitalWrite(i,HIGH);

  else

  digitalWrite(i,LOW);


  /*
  Si el valor de i es menor o igual al valor leido entonces se enciende el led
  y en caso contrario se apagaran
  asi los leds encendidos nos indicaran el valor leido de [0,8]
  */

}
