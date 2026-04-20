#define speedR 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedL 5

#define sensorleft 12
#define sensorright 11

int SL = 0;
int SR = 0;

// ================= SETUP =================
void setup() {
  Serial.begin(9600);

 
  for (int i = 5; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }


  pinMode(sensorleft, INPUT);
  pinMode(sensorright, INPUT);
}

// ================= MOVEMENT FUNCTIONS =================
void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(speedR, 230);
  analogWrite(speedL, 230);
}

void back() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(speedR, 230);
  analogWrite(speedL, 230);
}

void stopp() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(speedR, 0);
  analogWrite(speedL, 0);
}

void right() {
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(speedL, 230);
  analogWrite(speedR, 0);
}

void left() {
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(speedR, 230);
  analogWrite(speedL, 0);
}

// ================= LOOP =================
void loop() {
  
  SR = digitalRead(sensorright);
  SL = digitalRead(sensorleft);

  
  if (SR == 0 && SL == 0) {
    forward(); 
  } 
  else if (SR == 0 && SL == 1) {
    right();   
  } 
  else if (SR == 1 && SL == 0) {
    left();    
  } 
  else if (SR == 1 && SL == 1) {
    stopp();   
  }
}