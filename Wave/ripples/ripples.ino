void setup()
{
  //Setup usb serial connection to computer
  Serial.begin(9600);
}

void loop()
{ 
  
  //Read from usb serial to bluetooth
  while(Serial.available())
  {
    if(Serial.read() == '1') {
      Serial.println("hello");
    }
  }
}
