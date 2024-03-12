const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 200;         // velocitat de l'acció en ms
float valEntrada;
float voltage;

void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  

}


void loop()
{
  valEntrada = 0;
  for (int i =0; i<100; i++)
  {
    valEntrada = analogRead(A0) + valEntrada;
  }
  valEntrada = valEntrada/100;
  voltage = ( (float) valEntrada * 5.0 ) / 1023;
  Serial.println(voltage);
  
  
  
  if (voltage<=1)
  { 
    analogWrite(led0, voltage*255); 
    analogWrite(led1, LOW);
  }
  
   
  if (voltage>=1 && voltage<2 )
  { 
    digitalWrite(led0, HIGH);
    analogWrite(led1,(voltage-1)*255);
    analogWrite(led2, LOW);
   

  }
    
   
   if (voltage>=2 && voltage<3 )
  { 
    digitalWrite(led1, HIGH);
    analogWrite(led2,(voltage-2)*255);
    analogWrite(led3, LOW);
  }
 if (voltage>=3 && voltage<4 )
  { 
    digitalWrite(led2, HIGH);
    analogWrite(led3,(voltage-3)*255);
    analogWrite(led4, LOW);
  }
    if (voltage>=4 && voltage<5 )
  { 
    digitalWrite(led3, HIGH);
    analogWrite(led4,(voltage-4)*255);
  }
}






