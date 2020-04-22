int count = 0;
int speed = 100;
int n = 0;
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
   
    while ( digitalRead(2) == 0 ){
            count = count + 1;
            lightSpeed(100);
            if(count<=1){
                lightSpeed(100);
                n = n * 2;
                Serial.println("Faster X 2 (Current Speed : X" + String(n)")");
                tone(8,400,100);
                speed = speed / 2;
            }
    }
  
}