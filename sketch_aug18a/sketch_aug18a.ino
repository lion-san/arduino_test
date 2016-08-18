void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  char a;
  if(Serial.available()){
    Serial.println(Serial.available());
    a = char(Serial.read());
    Serial.println(a);
  }

}
