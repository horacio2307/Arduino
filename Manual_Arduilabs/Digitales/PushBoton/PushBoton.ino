#define boton 4

int estado=0;

void setup() {
  // put your setup code here, to run once:
  //Declaramos el pin 4 como entrada
  pinMode(boton,INPUT);
  digitalWrite(boton,HIGH); //Activamos resistencia pull-up
  Serial.begin(9600); //Inicializamos la comunicación seial a 9600 baudios
  //1 baudio = 1 bit/seg
}

void loop() {
  // put your main code here, to run repeatedly:
  estado=digitalRead(boton);
  //Imprimimos el siguiente mensaje
  Serial.print("El boton esta en estado: ");
  //La funcion Serial.println da un salto de lineal al final 
  Serial.println(estado);
  delay(500);
  /*
  Cuando se presiona el boton el estado es 0 y cuando no se presiona 
  el estado es 1 debido a la resistencia pull-up
  */

}

                                                                                                                  
