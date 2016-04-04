const int LEDPIN = 13;

const int IOA1 = 8;
const int IOB1 = 9;
const int IOA2 = 12;
const int IOB2 = 11;
const int IOA3 = 7;
const int IOB3 = 6;

void setup() {

  Serial.begin(9600);
  pinMode (IOA1, OUTPUT);
  pinMode (IOB1, OUTPUT);
  pinMode (IOA2, OUTPUT);
  pinMode (IOB2, OUTPUT);
  pinMode (IOA3, OUTPUT);
  pinMode (IOB3, OUTPUT);
  pinMode (LEDPIN, OUTPUT);
}

void loop() {

  turnLeft( IOA1, IOB1, 5000, 10 );
  Serial.println("Left");
  digitalWrite(LEDPIN, HIGH);
  turnLeft( IOA2, IOB2, 5000, 10 );
  Serial.println("Left");
  digitalWrite(LEDPIN, HIGH);
  turnLeft( IOA3, IOB3, 5000, 10 );
  Serial.println("Left");
  digitalWrite(LEDPIN, HIGH);
  delay(1000);
  turnRight( IOA1, IOB1, 5000, 10 );
  Serial.println("Right");
  digitalWrite(LEDPIN, LOW);
  turnRight( IOA2, IOB2, 5000, 10 );
  Serial.println("Right");
  digitalWrite(LEDPIN, LOW);
  turnRight( IOA3, IOB3, 5000, 10 );
  Serial.println("Right");
  digitalWrite(LEDPIN, LOW);
  delay(1000);

}

void turnLeft( const int IOA, const int IOB, int pulse, int del ) {
  for (int i = 0; i < pulse; i++) {
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, HIGH);
    delayMicroseconds(del);
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
  }
}

void turnRight( const int IOA, const int IOB, int pulse, int del ) {
  for (int i = 0; i < pulse; i++) {
    digitalWrite (IOA, HIGH);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
  }
}

