#include <SPI.h>
#include <WiFi101.h>

#include "arduino_secrets.h"

IPAddress ip(192, 168, 1, 99);
IPAddress gate(192, 168, 0, 1);
IPAddress sub(255, 255, 0, 0);
IPAddress ip2;

char ssid[] = SECRET_SSID;        // your network SSID (name)
char pass[] = SECRET_PASS;    // your network password (use for WPA, or use as key for WEP)

void setup() {
  // put your setup code here, to run once:
  //Configure pins for Adafruit ATWINC1500 Feather
  WiFi.setPins(8,7,4,2);
  
  //Initialize serial and wait for port to open:
  Serial.begin(9600);

  WiFi.config(ip, gate, sub);

  WiFi.begin(ssid, pass);
  ip2 = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
