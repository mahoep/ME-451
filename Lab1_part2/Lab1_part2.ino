void setup() {
  Serial.begin(9600);
}

void loop() {
  int tempSens = analogRead(A0);
  tempSens = map(tempSens, 0, 1023, 0, 5000);
  float Temp = tempSens/12.12-36.88;
  float time = millis();
  Serial.print(time);
  Serial.print(",");
  Serial.println(Temp);
}
