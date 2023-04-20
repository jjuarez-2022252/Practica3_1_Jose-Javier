/*
FUNDACION KINAL
CENTRO: Educativo Tecnico Laboral Kinal
Perito en Electronica 
Quinto Perito
SECCION: A
CURSO: Taller de Electronica Digital y Reparacion de Computadoras 
Proyecto: Maquina Expendedora
ALUMNOS: Jose Javier Juarez Rivera
CARNET: 2022252
*/

#define MOSTRAR(pin) digitalRead(pin)
#define ENTRADA(pin) pinMode(pin, INPUT)
#define botton1  2
#define botton2  3
int a=0;
  struct producto {
    char Nombre [20];
    int Stock;
    int Precio;
    }

 producto1 ={"Tablet",15,4},
 producto2 ={"Iphone",20,3},
 producto3 ={"Skullcandy",10,5},
 producto4 ={"Alexa",17,3};

void setup() {
    ENTRADA(botton1);
    ENTRADA(botton2);

}

void loop() {
  Serial.begin(9600);
  bool estado_boton1 = MOSTRAR(botton1);
  bool estado_boton2 = MOSTRAR(botton2);
   
     if((estado_boton1 == LOW) && (estado_boton2 == LOW))
  {
    delay(200);
    a++ ;
    if(a == 1){
          Serial.println("Menu");
           Serial.print("            ");
          Serial.println("Presione el boton correspondiente para seleccionar Tablet");
          Serial.print("            ");
          Serial.println("Presione el boton correspondiente para seleccionar Iphone");
          Serial.print("            ");
          Serial.println("Presione el boton correspondiente para seleccionar Skullcandy");
          Serial.print("            ");
          Serial.println("Presione el boton correspondiente para seleccionar Alexa");
          a++;
          delay(50);
    }
 }
  if((estado_boton1 == HIGH) && (estado_boton2 == LOW))
  {
    delay(200);
    a++ ;
    if(a == 1){
          Serial.println("Nombre     Stock    Precio");
          Serial.print(producto1.Nombre);
          Serial.print("            ");
          Serial.print(producto1.Stock);
          Serial.print("            ");
          Serial.println(producto1.Precio);
          a++;
          delay(50);
    }
    if(a == 3){
          Serial.print(producto2.Nombre);
          Serial.print("            ");
          Serial.print(producto2.Stock);
          Serial.print("            ");
          Serial.println(producto2.Precio);
          a++;
          delay(50);
    }
    if(a == 5){
          Serial.print(producto3.Nombre);
          Serial.print("            ");
          Serial.print(producto3.Stock);
          Serial.print("            ");
          Serial.println(producto3.Precio);
          a++;
          delay(50);
        }  
        if(a == 7){
          Serial.print(producto4.Nombre);
          Serial.print("            ");
          Serial.println(producto4.Stock);
          Serial.print("            ");
          Serial.println(producto4.Precio);
          a++;
          delay(50);
        }  
     }
        if((estado_boton2 == HIGH) && (estado_boton1 == LOW))
        {
          delay(200);
          a--;
          if(a == 1){
          Serial.print(producto4.Nombre);
          Serial.print("            ");
          Serial.print(producto4.Stock);
          Serial.print("            ");
          Serial.println(producto4.Precio);
          delay(50);
          a==8;
          }
           if(a == 3){
          Serial.print(producto1.Nombre);
          Serial.print("            ");
          Serial.print(producto1.Stock);
          Serial.print("            ");
          Serial.println(producto1.Precio);
          delay(50);
          a--;
          }
           if(a == 5){
          Serial.print(producto2.Nombre);
          Serial.print("            ");
          Serial.print(producto2.Stock);
          Serial.print("            ");
          Serial.println(producto2.Precio);
          delay(50);
          a--;
          }
           if(a == 7){
          Serial.print(producto3.Nombre);
          Serial.print("            ");
          Serial.print(producto3.Stock);
          Serial.print("            ");
          Serial.println(producto3.Precio);
          delay(50);
          a--;
          }
          if(a<0){
            a = 7;
                     }
            }
         
}

   
       
