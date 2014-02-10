
int led1 = 13;
int led2 = 11;
int led3 = 9;
int led4 = 7;
int led5 = 5;

int val = 0;

int LDR = 0;

void setup()
  {

    //SETUP SHIT
  }
 
void loop()
  {
    int val = analogRead(LDR);          //reads the ldr’s value through LDR which we have set to Analog input 0 “A0″
   
    val = map(val, 20, 36, 1, 6);
   
    if(led1 < 1){
      digitalWrite(led1, HIGH); 
    }else{
      digitalWrite(led1, LOW); 
    }
    
    if(led2 < 2){
      digitalWrite(led2, HIGH); 
    }else{
      digitalWrite(led2, LOW); 
    }
    
    if(led3 < 3){
      digitalWrite(led3, HIGH); 
    }else{
      digitalWrite(led3, LOW); 
    }
    
    if(led4 < 4){
      digitalWrite(led4, HIGH); 
    }else{
      digitalWrite(led4, LOW); 
    }
    
    if(led5 < 5){
      digitalWrite(led5, HIGH); 
    }else{
      digitalWrite(led5, LOW); 
    }
   
  }
