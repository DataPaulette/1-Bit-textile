
const int IOA = 8;
const int IOB = 9;

void setup() {
  Serial.begin(9600);
  pinMode (IOA, OUTPUT);
  pinMode (IOB, OUTPUT);

}

void loop() {


  turnLeft( 1000, 1 );
  Serial.println("Left");
  delay(1000);
  turnRight( 1000, 1 );
  Serial.println("Right");
  delay(1000);

}

void turnLeft( int pulse, int del ) {
  for (int i = 0; i < pulse; i++) {
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, HIGH);
    delayMicroseconds(del);
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
  }
}

void turnRight( int pulse, int del ) {
  for (int i = 0; i < pulse; i++) {
    digitalWrite (IOA, HIGH);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
    digitalWrite (IOA, LOW);
    digitalWrite (IOB, LOW);
    delayMicroseconds(del);
  }
}

