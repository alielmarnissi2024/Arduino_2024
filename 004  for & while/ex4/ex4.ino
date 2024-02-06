/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula2 = 2;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }
  
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
