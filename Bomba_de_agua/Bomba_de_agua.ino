/*
FUNDACION KINAL
CENTRO: Educativo Tecnico Laboral Kinal
Perito en Electronica 
Quinto Perito
SECCION: A
CURSO: Taller de Electronica Digital y Reparacion de Computadoras 
Proyecto: Bomba de Agua
ALUMNOS: Jose Javier Juarez Rivera
CARNET: 2022252
*/

#define Rele 3 
#define sensor0 4 
#define led1 5 

void setup() {
  // Define los pines como entradas o salidas
  pinMode(Rele, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(sensor0,INPUT);

}

void loop() {
  bool estado_LED_0 = digitalRead(sensor0); //leer el transistor y guardar en la variable
  if(estado_LED_0 ==HIGH)
{
  digitalWrite(Rele,HIGH);
  digitalWrite(led1,LOW);
 }
 if(estado_LED_0 ==LOW)
 {
  digitalWrite(Rele,HIGH);
  digitalWrite(led1,LOW);
   } 
 }
