#define led 13
#define photo A0
int val=0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(photo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(photo);
  if(val>400)
  {
    digitalWrite(led, LOW);
  }
  else
  {
    digitalWrite(led, HIGH);
  }
}