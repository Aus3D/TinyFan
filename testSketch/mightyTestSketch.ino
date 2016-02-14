// MightyFan test sketch.

void setup() {
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
 digitalWrite(11, HIGH);  
 digitalWrite(6, LOW); 
 digitalWrite(5, LOW); 
 digitalWrite(4, LOW); 
 delay(2000);               
 digitalWrite(11, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(5, LOW); 
 digitalWrite(4, LOW); 
 delay(2000);
 digitalWrite(11, LOW);
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH); 
 digitalWrite(4, LOW); 
 delay(2000);
 digitalWrite(11, LOW);
 digitalWrite(6, LOW);
 digitalWrite(5, LOW); 
 digitalWrite(4, HIGH); 
 delay(2000);
 digitalWrite(11, LOW);
 digitalWrite(6, LOW);
 digitalWrite(5, LOW); 
 digitalWrite(4, LOW); 
 delay(2000);
}
