void setup() {
  Serial.begin(9600);
}

void loop() {
  int photoR = analogRead(A0);
  photoR = map(0, 1023, 0, 255);
  analogWrite(A1, photoR);
  float time = millis();
  Serial.print(time);
  Serial.print(",");
  Serial.println(photoR);
}
