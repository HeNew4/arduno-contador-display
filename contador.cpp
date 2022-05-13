const int SALIDA1 = 6;
const int SALIDA2 = 5;
const int SALIDA3 = 4;
const int SALIDA4 = 3;
const int SALIDA5 = 2;
const int SALIDA6 = 1;
const int SALIDA7 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(SALIDA1, OUTPUT);
  pinMode(SALIDA2, OUTPUT);
  pinMode(SALIDA3, OUTPUT);
  pinMode(SALIDA4, OUTPUT);
  pinMode(SALIDA5, OUTPUT);
  pinMode(SALIDA6, OUTPUT);
  pinMode(SALIDA7, OUTPUT);
}

void loop() {
  // Apagando todo
  digitalWrite(SALIDA1, HIGH);
  digitalWrite(SALIDA2, HIGH);
  digitalWrite(SALIDA3, HIGH);
  digitalWrite(SALIDA4, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, HIGH);
  digitalWrite(SALIDA7, HIGH);
  delay(500);
  //UNO
  digitalWrite(SALIDA1, HIGH);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, HIGH);
  digitalWrite(SALIDA7, HIGH);
  delay(1000);
  //DOS
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, HIGH);
  digitalWrite(SALIDA4, LOW);
  digitalWrite(SALIDA5, LOW);
  digitalWrite(SALIDA6, HIGH);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //TRES
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, LOW);
  digitalWrite(SALIDA6, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //CUATRO
  digitalWrite(SALIDA1, HIGH);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, LOW);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //CINCO
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, HIGH);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, LOW);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, LOW);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //SEIS
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, HIGH);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, LOW);
  digitalWrite(SALIDA5, LOW);
  digitalWrite(SALIDA6, LOW);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //SIETE
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, HIGH);
  digitalWrite(SALIDA7, HIGH);
  delay(1000);
  //OCHO
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, LOW);
  digitalWrite(SALIDA5, LOW);
  digitalWrite(SALIDA6, LOW);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
  //NUEVE
  digitalWrite(SALIDA1, LOW);
  digitalWrite(SALIDA2, LOW);
  digitalWrite(SALIDA3, LOW);
  digitalWrite(SALIDA4, HIGH);
  digitalWrite(SALIDA5, HIGH);
  digitalWrite(SALIDA6, LOW);
  digitalWrite(SALIDA7, LOW);
  delay(1000);
}
