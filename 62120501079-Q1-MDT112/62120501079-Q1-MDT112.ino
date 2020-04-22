int count = 0;
int speed = 100;

void lightSpeed(int speed);
void setup(){
    Serial.begin(9600); 
    pinMode(8, OUTPUT);
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(2, INPUT_PULLUP);
    
}

void loop(){
    lightSpeed(speed);
   
  if (digitalRead(2) == 0) {
        if (count=1) {
            speed = speed/2;
            Serial.println(speed);
           // lightSpeed(speed);
             
        }  
    }
       
  
}