#include <Joystick.h>

//def
const int PIN_PITCH    = A0; // Elevator (Y-Axis)
const int PIN_ROLL     = A1; // Aileron  (X-Axis)
const int PIN_THROTTLE = A2; // Throttle
const int PIN_MIXTURE  = A3; // Mixture 

// Initialize Joystick HID Profile
// Joystick(hidReportId, joystickType, buttonCount, hatSwitchCount,
//          includeXAxis, includeYAxis, includeZAxis,
//          includeRxAxis, includeRyAxis, includeRzAxis,
//          includeRudder, includeThrottle, includeAccelerator,
//          includeBrake, includeSteering)
Joystick_ FlightYoke(
  JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_JOYSTICK, 
  0, 0,                   // 0 Buttons, 0 Hat switches
  true,  true,  false,    // X (Roll), Y (Pitch), Z
  false, false, false,    // Rx, Ry, Rz
  false, true,  false,    // Rudder, Throttle, Accelerator
  true,  false            // Brake (used for 2nd slider/mixture), Steering
);

void setup() {
  // Set ADC range (0 to 1023) to match internal ADC resolution
  FlightYoke.setXAxisRange(0, 1023);
  FlightYoke.setYAxisRange(0, 1023);
  FlightYoke.setThrottleRange(0, 1023);
  FlightYoke.setBrakeRange(0, 1023);

  FlightYoke.begin();
}

void loop() {
  //analogread
  int pitchVal    = analogRead(PIN_PITCH);
  int rollVal     = analogRead(PIN_ROLL);
  int throttleVal = analogRead(PIN_THROTTLE);
  int mixtureVal  = analogRead(PIN_MIXTURE);

  // If an axis moves in reverse, invert it using: (1023 - val)
  FlightYoke.setYAxis(pitchVal);
  FlightYoke.setXAxis(rollVal);
  FlightYoke.setThrottle(throttleVal);
  FlightYoke.setBrake(mixtureVal);

  delay(10); // delay
}