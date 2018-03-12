//Code obtained from http://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html

#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(115200);
  Serial.println();

  WiFi.begin("FiOS-L9HTM", "toe693add8423boa");     //SSID (network name), password

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}
