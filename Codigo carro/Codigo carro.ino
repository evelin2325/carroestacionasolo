// Codigo Parqueo
int IN1 = 8;
int IN2 = 7;
int IN3 = 4;
int IN4 = 2;
int Trig = 12;
int Echo = 13;
long DURACION;
long DISTANCIA;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
}

void loop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(Trig, HIGH);
  delay(1000);
  digitalWrite(Trig, LOW);
  delayMicroseconds(10);
  DURACION = pulseIn(Echo, HIGH);
  DISTANCIA = (DURACION * 0.017);


 if (DISTANCIA > 20 ) {
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
  delay(3000);
  digitalWrite(IN1, HIGH);
  delay(500);  // ESPERA 5 SEGUNDOS
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  delay(700);
  digitalWrite(IN1, LOW);  
  digitalWrite(IN3, LOW);
  delay(10000);
 }    
  
}



 
 
