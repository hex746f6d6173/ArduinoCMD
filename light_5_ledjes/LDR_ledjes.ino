
int led1 = 13;
int led2 = 11;
int led3 = 9;
int led4 = 7;
int led5 = 5;

int val = 0;
int LDR = A0;

void setup()
  {
     Serial.begin(9600);
    
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
    //SETUP SHIT
  }
 
void loop()
  {
    
    int val = analogRead(LDR);          //reads the ldr’s value through LDR which we have set to Analog input 0 “A0″
   
    val = map(val, 8, 30, 0, 5);
   
   Serial.print(analogRead(LDR));
    Serial.print(", ");
    Serial.println(val);
   
    if(val < 1){
      digitalWrite(led1, HIGH); 
    }else{
      digitalWrite(led1, LOW); 
    }
    
    if(val < 2){
      digitalWrite(led2, HIGH); 
    }else{
      digitalWrite(led2, LOW); 
    }
    
    if(val < 3){
      digitalWrite(led3, HIGH); 
    }else{
      digitalWrite(led3, LOW); 
    }
    
    if(val < 4){
      digitalWrite(led4, HIGH); 
    }else{
      digitalWrite(led4, LOW); 
    }
    
    if(val < 5){
      digitalWrite(led5, HIGH); 
    }else{
      digitalWrite(led5, LOW); 
    }
   
  }
