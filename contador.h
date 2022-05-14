#include <Arduino.h>

const int SALIDA1 = 6;
const int SALIDA2 = 5;
const int SALIDA3 = 4;
const int SALIDA4 = 3;
const int SALIDA5 = 2;
const int SALIDA6 = 1;
const int SALIDA7 = 0;

void contador (int numero) 
{
   switch (numero)
   {
   case 0:
      //Cero
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 1:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 2:
      //DOS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 3:
      //TRES
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 4:
      //CUATRO
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 5:
      //CINCO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 6:
      //SEIS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 7:
      //SIETE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 8:
      //OCHO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 9:
      //NUEVE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   default:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      break;
   }
}