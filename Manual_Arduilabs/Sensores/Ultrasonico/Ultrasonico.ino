//Definimos algunas constantes
#define eco 7
#define triger 8
#define sonido 34300.0 //Velocidad del sonido en el aire (cm/s)
#define s 10 //Esta distancia sera el limite para encender o apagar el led
float distancia;

//Funcion para encender un pin
void on(int a){

    digitalWrite(a,HIGH);
}

//Funcion para apagar un pin
void off(int a){

    digitalWrite(a,LOW);
}

//Funcion para preparar el triger
void triger_on(){

    off(triger); //Apagamos el triger
    delayMicroseconds(2); //Esperamos 2 microsegundos
    on(triger);  //Encendemos el triger
    delayMicroseconds(10); //Esperamos 10 microsegundos
    off(triger);  //Apagamos el triger
}

//Con esta funcion calcularemos la distancia
float calcular_distancia(){

    unsigned long tiempo = pulseIn(eco,HIGH); //Medimos el tiempo en que la onda va y viene

    //Dado que v=s/t podemos obtener s=v*t
    float distancia = tiempo * 0.000001 * sonido / 2.0; 
    //Dividimos sobre 2 porque solo nos interesa el tiempo de ida
    
    //Imprimimos la distancia por el monitor Serial
    Serial.print(distancia);
    Serial.print("cm");
    Serial.println();
    delay(500);

    //Retonamos el valor de la distancia
    return distancia;

}

void setup(){

    //Iniciamos la comuicación Serial
    Serial.begin(9600);

    //Declaramos los pines entradas/Salidas
    pinMode(triger,OUTPUT);
    pinMode(eco,INPUT);
    pinMode(13,OUTPUT);

}

void loop(){

    triger_on(); //Preaparamos el triger

    //La variable distancia toma el valor regresado por la funcion
    distancia = calcular_distancia(); 

    /*
    Si la distancia es menor o igual al limite s, se encendera un led
    En caso contrario se apagara
    */

    if(distancia<=s)

    digitalWrite(13,HIGH); //Encender Led

    else

    digitalWrite(13,LOW);  //Apagar Led
    

}
