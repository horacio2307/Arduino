//Definimos algunos valores
#define Sensor A0
#define Tiempo 300


void setup()
{
    //Iniciamos la comunicación Serial
    Serial.begin(9600);  
}

void loop()
{
    //Leemos el valor del pin del sensor LM35
    int valor_sensor=analogRead(Sensor);  
    //Convertimos el valor analogico °C
    float temperatura=5.00*valor_sensor*100.00/1024.00; 

    //Imprimimos el valor de la temperatura
    Serial.print("temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");
    //Esperamos un tiempo definido al principo
    delay(Tiempo);
}
