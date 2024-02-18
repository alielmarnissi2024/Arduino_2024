

/**********************************************************************************
**                              Array de 8 LEDs                                  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
int i=0;
void setup()
{
 
  pinMode(led0, OUTPUT);
  for(i=0;i<30;i++) 
  {
  digitalWrite(led0, HIGH);
  delay(200);
  digitalWrite(led0,LOW);
  delay(200);
  
  }

}


void loop() {
  // put your main code here, to run repeatedly:

}
