int angryEyes = 0; //false


const int buttonPin = 13;


void setup() {
  Serial.begin(9600);
  Serial.println("0,0");
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, INPUT);
}

void loop() {
// change delay to wait() 



  
  while (Serial.available()) {
    angryEyes = Serial.parseInt();
 
//    leftEye = Serial.parseInt();
  
    if (Serial.read() == '\n') {
      digitalWrite(2, angryEyes);
      digitalWrite(4, angryEyes);
      bool buttonState = digitalRead(buttonPin);
      delay(1);
      int sensor = analogRead(A0);
      delay(1);
      int sensor2 = analogRead(A1);
//      int newmap =  map(sensor2, 850, 120, 8, -8);
 
      delay(1);
      Serial.print(buttonState);
      Serial.print(',');
      Serial.print(sensor);
      Serial.print(',');
      Serial.println(sensor2);
    }
  } 
  }
