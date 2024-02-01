/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 89;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.println("aigua bullint!");
  } 
  else if (tempAigua >= 90 && tempAigua < 100)
  {
    Serial.println("aigua esta apunt de  bullir");

  }
  else
  {
    Serial.println("aigua no esta bullint ");

   }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
