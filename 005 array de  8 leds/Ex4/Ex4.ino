
/**********************************************************************************
**                                                                               **
**                           on/off button control LED                           **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT_PULLUP); // definir el pin 2 com una entrada amb pull-up interna
}


//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);  // llegir l’estat del button i guardar-lo
  
  // Comprovar si el botó està premut
  if (buttonState == 0)
  { 
    digitalWrite(led0, HIGH); // encendre el LED
  }
  else // Si el botó no està premut
  {
    digitalWrite(led0, LOW); // apagar el LED
  }

  delay(200); 
}
