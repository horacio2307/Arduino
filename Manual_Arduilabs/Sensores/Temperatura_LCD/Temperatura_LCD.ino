//Inclumos la libreria para manejar pantallas LCD
#include <LiquidCrystal.h>

//Declaramos constantes
#define rs 12
#define en 11
#define d4 5
#define d5 4
#define d6 3
#define d7 2 
#define Sensor A0

//Creamos un onjeto LiquidCrystal llamado lcd
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float Value = 0;

void setup()
{
    lcd.begin(16, 2); //Inicializamos el objeto creado llamdo lcd 
}

void loop()
{
   //Leemos el sensor y lo convertimos a °C 
   Value = analogRead(Sensor)*500.00/1023.00;

   lcd.setCursor(0, 0); //Nos colocamos en la posicion 0,0
   lcd.print("Temperatura:"); //Imprimimos le cadena de caracteres "Temperatura"
   lcd.setCursor(0, 1); //Nos colocamos en la posicion 0,1
   lcd.print(Value); //Mostramos el valor sensado 
   lcd.setCursor(7, 1); //Nos colocamos en la posicion 7,1
   lcd.print("C"); // Imprimimos el caracter 'C'

   delay(100); //Esperamos 100 Milisegundos
}
