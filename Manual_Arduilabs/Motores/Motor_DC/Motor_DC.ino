#define IN1 2
#define IN2 3
#define PWM 6

void avanza(byte power, int b){  //funcion para avanzar

    analogWrite(PWM, power); //Salida pwm al enable
    digitalWrite(IN1, HIGH); //Pin 1 Alto
    digitalWrite(IN2, LOW); //Pin 2 Bajo
    delay(b);

}

void atras(byte power , int b){  //funcion para retroceder

    analogWrite(PWM, power); //Salida pwm al enable
    digitalWrite(IN1, LOW); //Pin 1 Bajo
    digitalWrite(IN2, HIGH); //Pin 2 Alto
    delay(b);

}

void para(int b;){ //funcion para parar

    digitalWrite(IN1, 0);
    digitalWrite(IN2, 0);
    analogWrite(PWM,0);
    delay(b);
}

void setup()
{
    //Declaramos los pines como salidas
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    //El pin pwm no es necesario declararlo
}

void loop()
{
    avanza(255,1000);  //Avanzamos maxima velocidad
    atras(125,500); //retrocedemos media velocidad
    para(500);  // Paramos medio minuto
}
