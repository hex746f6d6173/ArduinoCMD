int sensorValue = 0;

void setup() {
	Serial.begin(9600);
	pinMode(3, OUTPUT); 
}

void loop() {

	sensorValue = analogRead(A0);

	if (sensorValue < 300) { // To change the point at which the light turns on change this value.

		digitalWrite(3, HIGH);

	} else {

		digitalWrite(3,LOW);

	}
}
