char inbyte = 0;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode (led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available() > 0)
  {
    inbyte = Serial.read();
    if (inbyte == '0')
    {
      //LED off
      digitalWrite(led, LOW);
    }
  // put your main code here, to run repeatedly:

}
}
