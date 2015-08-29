// TinyFan test sketch.

void setup() {
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
 digitalWrite(11, HIGH);  
 digitalWrite(6, LOW); 
 delay(2000);               
 digitalWrite(11, LOW);
 digitalWrite(6, HIGH);   
 delay(2000);
}
