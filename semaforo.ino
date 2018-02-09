/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 
 This example code is in the public domain.
 
 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:
const int ROJO =  13;
const int VERDE =  12;
const int AMARILLO1 =  11;
const int AMARILLO2 =  10;

// Variables will change:
int estado = 0;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 2000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ROJO, OUTPUT);      
  pinMode(VERDE, OUTPUT);  
  pinMode(AMARILLO1, OUTPUT);  
  pinMode(AMARILLO2, OUTPUT); 
       digitalWrite(VERDE, 1);
            digitalWrite(ROJO, 0);
                 digitalWrite(AMARILLO1, 0);
                      digitalWrite(AMARILLO2, 0); 
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
    estado=(estado+1)%5;
    if (estado==0){
//VERDE
      // set the LED with the ledState of the variable:
      digitalWrite(VERDE, 1);
      digitalWrite(ROJO, 0);
      digitalWrite(AMARILLO1, 0);
      digitalWrite(AMARILLO2, 0);
      
    }
    if (estado==1){
//VERDE AMARILLO (el amarillo del otro lado)
      // set the LED with the ledState of the variable:
      digitalWrite(VERDE, 1);
      digitalWrite(ROJO, 0);
      digitalWrite(AMARILLO1, 0);
      digitalWrite(AMARILLO2, 1);
      
    }
    if (estado==2){
//AMARILLO
      // set the LED with the ledState of the variable:
      digitalWrite(VERDE, 0);
      digitalWrite(ROJO, 0);
      digitalWrite(AMARILLO1, 1);
      digitalWrite(AMARILLO2, 1);
     
    }
    if (estado==3){
//ROJO
      // set the LED with the ledState of the variable:
      digitalWrite(VERDE, 0);
      digitalWrite(ROJO, 1);
      digitalWrite(AMARILLO1, 0);
      digitalWrite(AMARILLO2, 0);
     
    }
    if (estado==4){
//ROJO y AMARILLO
      // set the LED with the ledState of the variable:
      digitalWrite(VERDE, 0);
      digitalWrite(ROJO, 1);
      digitalWrite(AMARILLO1, 1);
      digitalWrite(AMARILLO2, 0);
     
    }

  }
}


