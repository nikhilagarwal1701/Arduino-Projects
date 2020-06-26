#define led 13
#define button1 2
#define button2 3
int val1=0;
int val2=0;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val1=digitalRead(button1);
  val2=digitalRead(button2);
  if(val2==val1)
  {
    digitalWrite(led,LOW);
  }
  else
  {
    digitalWrite(led,HIGH);
  }
}
