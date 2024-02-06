/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************


//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{  
  Serial.begin(9600);
  for(int taula = 2;taula<=10;taula++)
  {
    Serial.print("taula de multiplicar del");
    Serial.print(" ");
    Serial.println(taula);
  
 
  
  for (int i=0; i <= 10; i++){
  
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);
  }    
  }
  
}
void loop() {
  // Bucle buit
}


//********** Funcions *************************************************************
