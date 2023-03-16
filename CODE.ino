int pin = 2;
//declare the pin 2 for the interrupt
volatile int state = LOW;
//initialize it as low
//Declare them as volatile
void setup()
{
pinMode(13, OUTPUT);
//set the pinmode as output for 13 pin
pinMode(2, INPUT);
//set the pinmode as input for 2 pin
attachInterrupt(digitalPinToInterrupt(pin), flash, CHANGE);
//interrupt at pin 2 blink when pin to change the value,
//change value means when the motion is detected
}
void loop() {
}
void flash() {
state = !state; //toggle the state when the interrupt occurs
digitalWrite(13, state); //pin 13 have the new value of state
