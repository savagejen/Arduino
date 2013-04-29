int XVal, YVal, ZVal;
int lastXVal, lastYVal, lastZVal;
int brightnessValue;
int loopCount;
int ledPin = 5;
int movementDepth = 50;

void setup() {
  pinMode(13, INPUT); //MUST be set to input
  pinMode(ledPin, OUTPUT);
  XVal = 0;
  YVal = 0;
  ZVal = 0;
  lastXVal = 0;
  lastYVal = 0;
  lastZVal = 0;
  brightnessValue = 200;
  loopCount=0;
}

void loop() {
  
  //Accelerometer data
  lastXVal = XVal;
  lastYVal = YVal;
  lastZVal = ZVal;
  XVal = analogRead(5);
  YVal = analogRead(1);
  ZVal = analogRead(4);
  
  //If there was movement, "twinkle"
  if (((lastXVal-XVal)>movementDepth)||((lastYVal-YVal)>movementDepth)||((lastZVal-ZVal)>movementDepth)||((XVal-lastXVal)>movementDepth)||((YVal-lastYVal)>movementDepth)||((ZVal-lastZVal)>movementDepth))
  {
   analogWrite(ledPin, 0);
   delay(1);
   analogWrite(ledPin, brightnessValue);
   delay(loopCount); 
  }

  //Brightness
  if (lastXVal>XVal)
    brightnessValue-=15;
  if (lastYVal>YVal)
    brightnessValue-=15;
  if (lastZVal>ZVal)
    brightnessValue-=15;
  if (XVal>lastXVal)
    brightnessValue+=15;
  if (YVal>lastYVal)
    brightnessValue+=15;
  if (ZVal>lastZVal)
    brightnessValue+=15;
  if ((brightnessValue>255)||(brightnessValue<0))
   brightnessValue = 150; 
 
  //Keep the sparkL moving
  if (loopCount>brightnessValue)
  {
   analogWrite(ledPin, brightnessValue);
   delay(loopCount); 
   loopCount=0;
   brightnessValue=255;
  }
  loopCount++;
}
