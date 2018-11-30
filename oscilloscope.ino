const int analogPin = A0;
 
void setup() {
  Serial.begin(9600); 
}
 
void loop() {
  int val = analogRead(analogPin);
  Serial.write( 0xff );                                                         
  Serial.write( (val >> 8) & 0xff );                                            
  Serial.write( val & 0xff );
}
