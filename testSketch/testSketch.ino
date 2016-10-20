/*
 *  TinyFan / MightyFan test sketch
 *  
 *  Upload sketch to Arduino Mega and connect fan board. 
 *  Supply fan board with power via screw terminals.
 *  Each LED on the board should turn light up in sequence.
 *  
 */

#define FAN_PIN_0   11    //tinyfan1    +   mightyfan1
#define FAN_PIN_1   6     //tinyfan2    +   mightyfan2
#define FAN_PIN_2   5     //                mightyfan3
#define FAN_PIN_3   4     //                mightyfan4

//uncomment MIGHTYFAN define to test MightyFan board
//#define MIGHTYFAN

#ifdef MIGHTYFAN
  #define FAN_NUM 4
#else
  #define FAN_NUM 2
#endif

byte fanPins[] = {FAN_PIN_0, FAN_PIN_1, FAN_PIN_2, FAN_PIN_3};

void setup() {

  for(int i = 0; i < FAN_NUM; i++) {
    pinMode(fanPins[i], OUTPUT);
  }

}

void loop() {

  for(int i = 0; i < FAN_NUM; i++) {

    //set all pins to low
    for(int j = 0; j < FAN_NUM; j++) {
      digitalWrite(fanPins[j], LOW);
    }

    //set current pin high
    digitalWrite(fanPins[i], HIGH);
    
    delay(1000);
  }

}
