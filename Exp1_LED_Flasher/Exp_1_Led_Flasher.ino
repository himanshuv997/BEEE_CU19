// Coding for the Led flasher Using Arduino uno 
//Arduino Evaluation Question
// Name :Himanshu Verma
// Class :AIML_2 GP_2 

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH and LOW are the voltage level)
  digitalWrite(13, HIGH/*on*/);
  delay(1000); // Wait for 1000 millisecond(s) 1000millisecond = 1sec
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW/*off*/);
  delay(1000); // Wait for 1000 millisecond(s)
}