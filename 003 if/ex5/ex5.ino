/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**      2/2/2024                                             ALI                            **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float co2 = 56;  //
0
//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (co2 < 3.5) {
    Serial.println("A");
  } 
  else if (co2 < 6.5) {
    Serial.println("B");
  }
  else if (co2 < 11.1) {
    Serial.println("C");
  }
  else if (co2 < 17.7) {
    Serial.println("D");
  }
  else if (co2 < 38.2) {
    Serial.println("E");
  }
  else if (co2 < 43.2) {
    Serial.println("F");
  }
  else {
    Serial.println("G");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though it's empty
{
}

//********** Funcions *************************************************************
