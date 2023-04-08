int ledState = LOW;  
int ledState1 = LOW;  
int ledState2 = LOW;  
int ledState3 = LOW;  

unsigned long previousMillis = 0;  
unsigned long previousMillis1 = 0;  
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0;  

const long interval = 1000;  

void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  unsigned long currentMillis =   micros();

  if (currentMillis - previousMillis >= 50) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(6, ledState);
  } 


  if (currentMillis - previousMillis1 >= 100) {
    previousMillis1 = currentMillis;
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    digitalWrite(5, ledState1);
  }

  if (currentMillis - previousMillis2 >= 1000) {
    previousMillis2 = currentMillis;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(3, ledState2);
  }

  if (currentMillis - previousMillis3 >= 10000) {
    previousMillis3 = currentMillis;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(9, ledState3);
  }
}
