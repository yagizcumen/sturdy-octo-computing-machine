
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;
int buttonPin = 9;
int counter = 1;
bool buttonState = LOW;

void setup() {

  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(buttonPin, INPUT);
  displayNumber(counter);
}

void loop() { 
  if (digitalRead(buttonPin) == HIGH) {
    delay(200);
    counter++;
    if (counter > 15) {
      counter = 1;
    }
    displayNumber(counter); 
    while(digitalRead(buttonPin) == HIGH);
  }
}

void displayNumber(int num) {

  switch(num) {
    case 1: displaySegments(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW); break;
    case 2: displaySegments(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH); break;
    case 3: displaySegments(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH); break;
    case 4: displaySegments(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH); break;
    case 5: displaySegments(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH); break;
    case 6: displaySegments(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH); break;
    case 7: displaySegments(HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW); break;
    case 8: displaySegments(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH); break;
    case 9: displaySegments(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH); break;
    // EN ÜST , SAĞ ÜST , SAĞ ALT , EN ALT , SOL ALT , SOL ÜST , ORTA //
    case 10: displaySegments(HIGH, HIGH, HIGH, LOW, HIGH, HIGH, HIGH); break;
    case 11: displaySegments(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH); break;
    case 12: displaySegments(HIGH, LOW, LOW, HIGH, HIGH, HIGH, LOW); break;
    case 13: displaySegments(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW); break;
    case 14: displaySegments(HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH); break;
    case 15: displaySegments(HIGH, LOW, LOW, LOW, HIGH, HIGH, HIGH); break;
    
  }
}


void displaySegments(bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
  digitalWrite(segA, a);
  digitalWrite(segB, b);
  digitalWrite(segC, c);
  digitalWrite(segD, d);
  digitalWrite(segE, e);
  digitalWrite(segF, f);
  digitalWrite(segG, g);
}
