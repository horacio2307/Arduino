byte value = 0, value2 = 0, aux=0;  //Declaramos variables

void setup()
{

    DDRD = B11111111;  //Establecemos todo el puerto D (pines 0-7) como salidas

    DDRB = B00000000;  //Establecemos todo el puerto B (pines 8-13) como entradas

    PORTB = B11111111; //Activamos las resistencias pull up
    
}

void loop()
{

//Leera los botones y lo guardara en aux
aux = digitalRead(8) + digitalRead(9)*2 + digitalRead(10)*4 + digitalRead(11)*8; 
value=15-aux; //value=15 - los botones


switch (value)
{
case 0: value2 = B01111110;
    
    break;

case 1: value2 = B00110000;

    break;

case 2: value2 = B01101101;

    break;

case 3: value2 = B01111001;

    break;

case 4: value2 = B00110011;

    break;

case 5: value2 = B01011011;

    break;

case 6: value2 = B01011111;
    break;

case 7: value2 = B01110000;

    break;

case 8: value2 = B01111111;
    break;

case 9: value2 = B01111011;

    break;

case 10: value2 = B01110111;

    break;

case 11: value2 = B00011111;

    break;

case 12: value2 = B01001110;

    break;

case 13: value2 = B00111101;

    break;

case 14: value2 = B01001111;

    break;

case 15: value2 = B01000111;

    break;

default:    value2=B0000000;
    break;
}

PORTD = value2; //Escribe el valor en binario por el puerto D (pines [0-7])

}
