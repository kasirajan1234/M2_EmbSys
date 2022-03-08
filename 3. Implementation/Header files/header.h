#define ENABLE_DEBUG
#ifdef ENABLE_DEBUG
#define DEBUG_ESP_PORT Serial

#define NODEBUG_WEBSOCKETS
#define NDEBUG
#endif
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "SinricPro.h"
#include "SinricProSwitch.h"
#include <map>
#define WIFI_SSID "vivo 1916"
#define WIFI_PASS "sowndhar"
#define APP_KEY "ca3d53e6-04fc-4097-a903-
611766dde5c8" // Should look like "de0bxxxx-1x3x-
4x3x-ax2x-5dabxxxxxxxx"
#define APP_SECRET "82fa4d56-1f6c-459c-b2fa-
960b8d189b41-57b5e83c-9b76-4a26-af50-3987d533ecc2"
// Should look like "5f36xxxx-x3x7-4x3x-xexe-
e86724a9xxxx-4c4axxxx-3x3x-x5xe-x9x3-333d65xxxxxx"
//Enter the device IDs here
#define device_ID_1 "619944e8eb3dca18282382bd"
#define device_ID_2 "61993d88eb3dca1828238279"
#define device_ID_3 "61994453eb3dca18282382bb"
#define device_ID_4 "xxxxxxxxxxxxxxxxxxxxxxxx"
// define the GPIO connected with Relays and switches
#define RelayPin1 5 //D1
#define RelayPin2 4 //D2
#define RelayPin3 14 //D5
#define RelayPin4 12 //D6
#define SwitchPin1 10 //SD3
#define SwitchPin2 0 //D3
#define SwitchPin3 13 //D7
#define SwitchPin4 3 //RX
#define wifiLed 16 //D0
// comment the following line if you use a toggle switches
instead of tactile buttons
//#define TACTILE_BUTTON 1
#define BAUD_RATE 9600
#define DEBOUNCE_TIME 250
typedef struct { // struct for the std::map below
int relayPIN;
int flipSwitchPIN;
} deviceConfig_t;