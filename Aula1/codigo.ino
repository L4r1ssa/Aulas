// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

int var;

void loop()
{
  
  var = digitalRead(2);
  digitalWrite(3, var);
  delay(10);
  
}
