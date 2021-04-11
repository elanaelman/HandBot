int vPin = 2;
int pPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
//Pressure sensor code:
int p = analogRead(pPin)/4;
int ppow = pow((double)p/256, 0.66)*256;
analogWrite(vPin, ppow);
}
