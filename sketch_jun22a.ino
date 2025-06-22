#include <M5Core2.h>
 
// Mean that is is running onces
void setup() {
  M5.begin(); // you need the neeed to make the M5core2 to start going.
 
    // put your setup code here, to run once:
    M5.Lcd.fillScreen(RED);
     
    // Delay srceen 1 sec
    delay(1000);
 
    M5.Lcd.fillScreen(WHITE);
     
    // Delay srceen 1 sec
    delay(1000);
 
    M5.Lcd.fillScreen(BLUE);
     
    // Delay srceen 1 sec
    delay(1000);
 
    M5.Lcd.fillScreen(RED);
     
    // Delay srceen 1 sec
    delay(1000);
 
    M5.Lcd.fillScreen(WHITE);
     
    // Delay srceen 1 sec
    delay(1000);
    
    M5.Lcd.fillScreen(BLUE);
     
    // Delay srceen 1 sec
    delay(1000);
 
    M5.Lcd.fillScreen(BLACK);
     
    // Delay srceen 1 sec
    delay(1000);
    
  
    M5.Lcd.setCursor(20,20);
 
    // set the text size to 2
    M5.Lcd.setTextSize(2);
 
 
    // This is how print a word
    M5.Lcd.print("Fares Hernandez");
 
 
}
 
 
 
 
 
 
 
 
 
// Merans that is will run on a loop
void loop() {
  // put your main code here, to run repeatedly:
}