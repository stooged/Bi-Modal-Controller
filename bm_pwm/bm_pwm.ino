#include <PWM.h>  // pwm-frequency-library    https://code.google.com/archive/p/arduino-pwm-frequency-library/downloads
#include <EEPROM.h>

const int pwmPin = 9;      //pin9 onboard for pwm signal
const int SwitchPin = 7;   // pin7 on board - GND activated switch
bool IsRunning = true;

bool valveState()
{
  int sVal = EEPROM.read(0);
  if (sVal == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void openValves()
{
  pwmWrite(pwmPin, 203);
}

void closeValves()
{
  pwmWrite(pwmPin, 51);
}

void setup() {
  InitTimersSafe(); 
  SetPinFrequencySafe(pwmPin, 200);
  pinMode(pwmPin, OUTPUT); 
  pinMode(SwitchPin, INPUT_PULLUP); 

  if (valveState() == true)
  {
    closeValves();
  }
  else
  {
    openValves();
  }
  IsRunning = false;
}

void loop() 
{
  if (IsRunning == false)
  {
    if (digitalRead(SwitchPin) == LOW) 
    {
      IsRunning == true;   
      if (valveState() == true)
      {
        EEPROM.write(0, 0);
        openValves();
      }
      else
      {
        EEPROM.write(0, 1);
        closeValves();
      } 
      delay(1000);
      IsRunning == false;
    }
   }
}
