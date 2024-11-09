const int sensor = 13;
const int red = 12;
const int green = 11;
const int button = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool svalue = digitalRead(sensor);
  bool bvalue = digitalRead(button);
  delay(10);
  Serial.print("Sensor: "); Serial.println(svalue);
  Serial.print("Button: "); Serial.println(bvalue);

  if (bvalue == HIGH && svalue == LOW){
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  }
  else{
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
}
