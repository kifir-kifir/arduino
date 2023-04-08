#include <TaskManager.h>

int ledPins3 = 3;
int ledPins5 = 5;
int ledPins6 = 6;
int ledPins9 = 9;

int ledStates3 = LOW;
int ledStates5 = LOW;
int ledStates6 = LOW;
int ledStates9 = LOW;


long intervals3 = 50;
long intervals5 = 100;
long intervals6 = 1000;
long intervals9 = 10000;

void setup() {
  pinMode(ledPins3, OUTPUT);
  pinMode(ledPins5, OUTPUT);
  pinMode(ledPins6, OUTPUT);
  pinMode(ledPins9, OUTPUT);

  taskManager.scheduleFixedRate(intervals3, [] {
    led(ledStates3, ledPins3);
  }, TIME_MICROS);
   
   taskManager.scheduleFixedRate(intervals5, [] {
    led(ledStates5, ledPins5);
  }, TIME_MICROS);
  
   taskManager.scheduleFixedRate(intervals6, [] {
    led(ledStates6, ledPins6);
  }, TIME_MICROS);

   taskManager.scheduleFixedRate(intervals9, [] {
    led(ledStates9, ledPins9);
  }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}

void led(int &ledState, int led)
{
  if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  digitalWrite(led, ledState);
}
