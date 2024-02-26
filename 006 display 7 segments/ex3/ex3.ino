const int A = 2;  
const int B = 3;  
const int C = 4;  
const int D = 5;  
const int E = 6;  
const int F = 7;  
const int G = 8; 
int i = 0;
const byte buttonPin = 9;
int buttonState = 0;
int play = 0;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if(i == 0) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH); 
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW); 
    delay(250);
  }
  else if(i == 1) {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    delay(250);
  }
  else if(i == 2) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 3) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH); 
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 4) {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 5) {
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 6) {
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH); 
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 7) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    delay(250);
  }
  else if(i == 8) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH); 
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(250);
  }
  else if(i == 9) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    delay(250);
  }

  if(buttonState == LOW) {
    play = !play;
    delay(200);
  }

  if(play == 0) { 
    i = i + 1;
  }
  if(i > 9) {
    i = 0;
  }
}
