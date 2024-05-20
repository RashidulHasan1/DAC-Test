#include <Wire.h>
#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 dac;
// Set this value to 9, 8, 7, 6 or 5 to adjust the resolution
#define DAC_RESOLUTION    (9)

void setup(void) {
  Serial.begin(9600);
  Serial.println("MCP4725A1 Test");
  //MCP4725A1 address is 0x60 (default); 
  // MCP4725A1 address is 0x63 (ADDR pin tied to VCC) 
  // MCP4725A1 address is 0x60 (ADDR pin tied to GND) 
  dac.begin(0x60); //I have my ADDR pin connected to GND so address is 0x60
}

void loop(void) {      
  dac.setVoltage((1*4095)/5, false);        //Set voltage to 1V
  delay(2000);
  dac.setVoltage((2*4095)/5, false);        //Set voltage to 2V
  delay(2000);
  dac.setVoltage((3*4095)/5, false);        //Set voltage to 3V
  delay(2000);
  dac.setVoltage((4*4095)/5, false);        //Set voltage to 4V
  delay(2000);
 dac.setVoltage((5*4095)/5, false);            //Set voltage to 5V or (Vcc)
  delay(2000); 
}
