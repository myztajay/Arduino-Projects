int switchState = 0;
bool flipped = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalRead() read the voltage for selected pin
  switchState = digitalRead(2);
  
  if(switchState == HIGH){
    if(flipped == true){
        flipped = false;
      }
    else{
        flipped = true;
      } 
   }
   
  if(flipped){
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      delay(250);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      delay(250);
      }
  else{
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW); 
    }

}
