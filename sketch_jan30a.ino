#include <SoftwareSerial.h>

SoftwareSerial BTSer(0,1);
int led = 13; //pin LED arduino
int BluetoothData;
 
void setup(){
  BTSer.begin(9600);
  BTSer.println("REady");
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
 
void loop(){
  if (BTSer.available()){
    BluetoothData = BTSer.read();
    Serial.println(BluetoothData);
    if (BluetoothData == '1'){
      digitalWrite(led, HIGH);
      BTSer.println("LED on");
    }
    if (BluetoothData == '0'){
      digitalWrite(led, LOW);
      BTSer.println("LED off");
    }
    
  }
  delay(100);
}
