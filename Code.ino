/*

Created by Vishan A.Amarnath

www.vishanamarnath.com

 */



int bluetooth; 

void setup()
{
  pinMode(2,OUTPUT);
  Serial.begin(9600);      //set baud rate 

  }

  void loop()
  {
    if(Serial.available()>0)   //check is  the data  present or not 
    {
     bluetooth = Serial.read(); //reaing the data present in the serial available
    }
    if(bluetooth=='A')    //it checks the data recived from the bluetooth module is A
    {
    digitalWrite(2,HIGH); //if the data is A the Relay should power on
    }
     else if(bluetooth=='B')  //it checks the data recived from the bluetooth module is B
    {
    digitalWrite(2,LOW);  //if the data is A the Relay should power off
    }
  }
