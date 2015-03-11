void setup ()
{ 
  Serial.begin (115200); 
  //Serial.print("$$$");
  //delay(100);
  //Serial.println("U,9600,N");
  //Serial.begin(9600);
}

void loop () 
{
  String test = "1,2,3,4,5,6,7,8,9,*,1,2,3,4,5,6,7,8,9,*,1,2,3,4,5,6,7,8,9,*";
  Serial.print(test + ",");
  delay(6250);
}
