void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(34);
  Serial.println(sensorValue);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  
  Serial.println(voltage);
  delay(300);
}