#define suma 8
#define resta 9
#define reinicio 10 
byte contador=0;
bool b=false;
void setup() {
  // put your setup code here, to run once:
  DDRD = B11111111; //Declarar los pines [0,7] como salidas
  DDRB = B11111000; //Pines [8,10] Enteadas y [11,13] Salidas
  PORTB = B11111111; //Activar resistencias pull_up
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if(digitalRead(suma)==0) //Si se presioan, suma uno al contador
    {
      while(digitalRead(suma)==0) //Evitamos que el robote del boton nos de lecturas de mas
      b=true;    
      contador++;
    }
  if(digitalRead(resta)==0) //Si se presioan, suma uno al contador
  {
    while(digitalRead(resta)==0) //Evitamos que el robote del boton nos de lecturas de mas
    b=true;
    contador--;  
  }
    
  if(digitalRead(reinicio)==0) //Si se presioan, limpia el contador
    contador=0;
    
  if(contador<1 || contador>254) //Si se desborda por arriba o por abajo lo resetea en 0
    contador=0;

  PORTD = contador;  //Escribimos el numero en el puerto D que son los pines [0,7]

  delay(100);  //Esperamos 100 milisegundos para que se repita el programa
}
