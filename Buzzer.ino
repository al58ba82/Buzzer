//Example code KY012 active buzzer
//SOS - …---…
int speakerPin = 8;
void setup () {
  pinMode (speakerPin, OUTPUT);
}
void loop () {
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (200);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (200);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (200);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  analogWrite (speakerPin, 255);
  delay (100);
  analogWrite (speakerPin, 0);
  delay (100);
  
}

