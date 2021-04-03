//Definimos nuestras constantes
#define A 4
#define B 5
// Variables de tipo entero
int Boton1=0, Boton2=0;

void Secuencia1(){

    PORTD = B00001100; //Escribimos 1100 al motor
    delay(1000);
    PORTD = B00000110; //Escribimos 0110 al motor
    delay(1000);
    PORTD = B00000011; //Escribimos 0011 al motor
    delay(1000);
    PORTD = B00001001; //Escribimos 1001 al motor
    delay(1000);   
}

void Secuencia2(){

    PORTD = B00000011; //Escribimos 0011 al motor
    delay(1000);
    PORTD = B00000110; //Escribimos 0110 al motor
    delay(1000);   
    PORTD = B00001100; //Escribimos 1100 al motor 
    delay(1000);
    PORTD = B00001001; //Escribimos 1001 al motor
    delay(1000);   
}

void setup()
{
    DDRD = B00001111;  //Pines [0,3] como salidas [4,7] como entradas

    PORTD = B11110000;  //Activamos resistencias pull-up en los pines[4,7]

}

void loop()
{

    //Asignamos a nuestras variables el estado de cada pin correspondientes
    Boton1 = digitalRead(A);

    Boton2 = digitalRead(B);
    
    //Si se presiona el boton 1 se activa la secuencia 1
    if(Boton1==0 && Boton2==1) 
    Secuencia1();
    
    //Si se presiona el boton 2 se activa la secuencia 2
    if(Boton1==1 && Boton2==0)  

    Secuencia2();
    Boton1=Boton2=0;
    
}
