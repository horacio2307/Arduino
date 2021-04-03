#define Pin_Pot A0

int Pot=0;

void setup() {
  // put your setup code here, to run once:
  //Inicializamos la comunicacion serial
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Asignamos a la variable Pot el valor del potenciometro leido por el pin analogico A0
  //este valor esta en el rango [0,1023]
  Pot=analogRead(Pin_Pot);

  //Imprimimos la siguiente cadena de caracteres
  Serial.print("Valor Potenciometro: ");
  //Imprimimos el valor de Pot con un salto de linea al final
  Serial.println(Pot);

  //Esperamos 250 milisegundos
  delay(250);

  

}
