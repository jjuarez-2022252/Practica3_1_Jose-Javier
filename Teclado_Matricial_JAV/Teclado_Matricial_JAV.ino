/*
FUNDACION KINAL
CENTRO: Educativo Tecnico Laboral Kinal
Perito en Electronica
Quinto Perito
SECCION: A
CURSO: Taller de Electronica Digital y Reparacion de Computadoras 
Proyecto: Teclado Matricial
ALUMNOS: Jose Javier Juarez Rivera
CARNET: 2022252
*/

#include <Keypad.h> //Incluimos la libreria Keypad.h, perteneciente a Keypad Master

//Macros o directivas de preprocesador
#define filas 4  
#define columnas 4
#define f1_teclado 9  
#define f2_teclado 8  
#define f3_teclado 7  
#define f4_teclado 6
#define c1_teclado 5  
#define c2_teclado 4  
#define c3_teclado 3  
#define c4_teclado 2  

 #define a 10
 #define b A0
 #define c A1
 #define d A2
 #define e A3
 #define f A4
 #define g A5

char keys[filas][columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[filas] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};


Keypad JavviierKeypad = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas,columnas);

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
void loop(){
   char MOSTRAR = JavviierKeypad.getKey();  
  switch(MOSTRAR)
  {
   
   break;
   case('0'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   ;
   break;
   case('1'):
   digitalWrite(a, HIGH); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH); digitalWrite(g, HIGH);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('2'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, HIGH);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, HIGH); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('3'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, HIGH); digitalWrite(f, HIGH); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('A'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, HIGH); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('4'):
   digitalWrite(a, HIGH); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('5'):
   digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, HIGH); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('6'):
   digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('B'):
   digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('7'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH); digitalWrite(g, HIGH);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('8'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('9'):
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, HIGH); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('C'):
   digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('D'):
   digitalWrite(a, HIGH); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, HIGH); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('#'):
   digitalWrite(a, LOW); digitalWrite(b, HIGH);digitalWrite(c, HIGH);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;
   case('*'):
   digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
   digitalWrite(d, HIGH); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, LOW);
   delay(1000);
   digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
   digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW); digitalWrite(g, HIGH);
   break;

   

  }
}
