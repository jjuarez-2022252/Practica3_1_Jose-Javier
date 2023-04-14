/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: CONTROL DE UN LED RGB POR MEDIO DE BOTONES
   Nombre: Jose Javier Juarez Rivera
   Encardo: Profe. Alejandro Lopez Navas
   Fecha: 13 de Abril
*/

#define push_button 2
#define push_buttone 3
#define led0 4
#define led1 5
#define led2 6
#define setpinInput(pin)        pinMode(pin,INPUT)
#define setpinInputPullup(pin)  pinMode(pin, INPUT_PULLUP)
#define setpinInput(pin)        pinMode(pin,INPUT)
#define setpinInputPullup(pin)  pinMode(pin, INPUT_PULLUP)
 


void setup() {
    setpinInput(push_button);
    setpinInput(push_buttone);
      pinMode(led0, OUTPUT);  
  digitalWrite(led0, LOW);  
    pinMode(led1, OUTPUT);  
  digitalWrite(led1, LOW);  
    pinMode(led2, OUTPUT);  
  digitalWrite(led2, LOW);  
}

void loop() {
 if(digitalRead(push_button )==LOW && digitalRead(push_buttone)==LOW){
   digitalWrite(led0, HIGH);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   delay(1000);
   digitalWrite(led0, LOW);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, LOW);
   delay(1000);
    digitalWrite(led0, LOW);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   delay(1000);
 }
  if(digitalRead(push_button )==HIGH && digitalRead(push_buttone)==LOW){
 
   digitalWrite(led0, HIGH);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, LOW);
   delay(1000);
   
  }
  if(digitalRead(push_button)==LOW && digitalRead(push_buttone)==HIGH){
 
   digitalWrite(led0, LOW);
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   delay(1000);
   
 }
 if(digitalRead(push_button)==HIGH && digitalRead(push_buttone)==HIGH){
   
   digitalWrite(led0, HIGH);
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   delay(1000);
   
 }
}
