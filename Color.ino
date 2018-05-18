int redPin = 11;
int greenPin = 10;
int bluePin = 9;
void setup()
{
  pinMode(redPin,OUTPUT);
   pinMode(greenPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
}
void loop()
{
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  delay(500);
   analogWrite(redPin,255);
  analogWrite(greenPin,90);
  analogWrite(bluePin,0);
  delay(500);
   analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,0);
  delay(500);
   analogWrite(redPin,0);
  analogWrite(greenPin,255);
  analogWrite(bluePin,0);
  delay(500);
   analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
  delay(500);
   analogWrite(redPin,0);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
  delay(500);
   analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
  delay(500);
   analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  delay(500);
   analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
  delay(500);
  }

