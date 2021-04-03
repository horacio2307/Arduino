//Definimos los pines a utilizar
#define B0 3
#define B1 5
#define B2 8
#define Pot A0

void bits(int a, int b, int c){ //Esta funcion nos ayudara a escribir las salidas de los 3 bits 
  
    digitalWrite(B2, a);
    digitalWrite(B1, b);
    digitalWrite(B0, c);
    
}

void setup()
{
    //Declaramos los pines como salidas
    pinMode(B0, OUTPUT);
    pinMode(B1, OUTPUT);
    pinMode(B2, OUTPUT);
    
}

void loop()
{  
    int value;
    value=analogRead(Pot);  //Leemos el valor del pin analogico A0 que definimos anteriormente como Pot
    value=map(value, 0, 1023, 0, 8); //Transformamos el valor de un rango de [0,1023] a uno de [0,8]   
    //Dependiendo el valor de "value" ejecutara la funcion bits() con los valores asginados en cada caso
    switch (value)
    {
    case 0: bits(0,0,0);
        break;
    case 1: bits(0,0,1);
        break;
    case 2: bits(0,1,0);
        break;
    case 3: bits(0,1,1);
        break;
    case 4: bits(1,0,0);
        break;
    case 5: bits(1,0,1);
        break;
    case 6: bits(1,1,0);
        break;
    case 7: bits(1,1,1);
        break;
    default:
        break;
    }
}
