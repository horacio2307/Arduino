
/*
7 Peaton 2
6 Rojo 2
5 Amarillo 2
4 Verde 2
3 Peaton 1
2 Rojo 1
1 Amarillo 1
0 Verde 1
*/

//Definimos constantes
#define tiempo 3000

void setup() {
  // put your setup code here, to run once:

  DDRD = B11111111;  //Declarar los pines [0,7] como salidas

}

void loop() {
  // put your main code here, to run repeatedly:

  PORTD = B11000001;  //Peaton 2, Rojo 2, Verde 1

  delay(tiempo);

  PORTD = B11000010;  //Peaton 2, Rojo 2, Amarillo 1

  delay(tiempo);

  PORTD = B00011100;  //Peaton 1, Verde 2, Rojo 1

  delay(tiempo);

  PORTD = B00101100; //Peaton 1, Amarillo 2, Rojo 1

  delay(tiempo);

}
