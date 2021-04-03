char caracter;
long numero=0;

void setup() {

  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>=3){

        while(Serial.available()>0){         
        caracter = Serial.read();
        numero*=10;
        numero+=(int(caracter)-'0');
        
        }

   Serial.print("Usted ingreso el numero :");
   Serial.println(numero);

  } 

  numero=0;
}

/*        
    }*/
