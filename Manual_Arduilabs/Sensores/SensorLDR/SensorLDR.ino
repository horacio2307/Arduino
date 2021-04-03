//Definimos constantes
#define LDR A2
#define Led 11
//Variable tipo entera 
int ValorLDR=0,PWM=0;

void setup() {
  // put your setup code here, to run once:
  //Iniciamos la comunicacion serie con el PC
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  //La variable es igual a la lectura de pin analogico A2
  ValorLDR=analogRead(LDR);
  //Imprimimos el valor leido por el puerto serie
  Serial.print("Valor LDR:");
  Serial.println(ValorLDR);

  //Mandaremos señal pwm al led 
  //proporcional al valor leido del sensor LDR

  PWM=map(ValorLDR,0,1023,0,150);
  analogWrite(Led,PWM);
  
  delay(750); //Espera 3/4 de segundo

}
