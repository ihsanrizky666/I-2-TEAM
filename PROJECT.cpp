const int Sensor = 2; 
const int relay = 3; 

int x = 0;
int relayStatus = LOW;

void setup() {
  pinMode(relay, OUTPUT); 
  pinMode(Sensor, INPUT); 
  digitalWrite(relay, relayStatus); // Set awal relay
}

void loop() {
  x = digitalRead(Sensor);

  if (relayStatus == HIGH && x == LOW) { 
    delay(250);
    relayStatus = LOW;
    digitalWrite(relay, relayStatus); 
  }
  if (relayStatus == LOW && x == LOW) { 
    delay(250);
    relayStatus = HIGH;
    digitalWrite(relay, relayStatus); 
  }
}