

#include <Servo.h>

const int buttonPin = 2;    // the number of the button pin
const int servoPin = 9;     // the number of the servo pin
const int potPin = A0;      // the potentiometer pin

class Sweeper {
  Servo servo;
  int pos;              // current servo position
  int increment;        // increment to move for each interval
  int updateInterval;   // interval between updates (ms)
  unsigned long lastUpdate; // last update of position

public:
  Sweeper(int interval) {
    updateInterval = interval;
    increment = 1;
    pos = 0;
    lastUpdate = 0;
  }

  void Attach(int pin) {
    servo.attach(pin);
  }

  void Detach() {
    servo.detach();
  }

  void SetSpeed(int interval) {
    updateInterval = interval;
  }

  void Update(bool shouldSweep) {
    if (!shouldSweep) {
      return;  // dont update position if button not pressed
    }

    if ((millis() - lastUpdate) > updateInterval) {
      lastUpdate = millis();
      pos += increment;
      servo.write(pos);

      // reverse direction at the end
      if ((pos >= 180) || (pos <= 0)) {
        increment = -increment;
      }
    }
  }
};

Sweeper sweeper1(15);

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // button with internal pull-up resistor so i dont have to use a physical one
  sweeper1.Attach(servoPin);
}

void loop() {
  // read btn state
  bool buttonPressed = (digitalRead(buttonPin) == LOW);

  // read potentiometer and map to speed (1-50ms interval)
  int potValue = analogRead(potPin);
  int speed = map(potValue, 0, 1023, 1, 50);
  sweeper1.SetSpeed(speed);

  // uodate sweeper
  sweeper1.Update(buttonPressed);
}
