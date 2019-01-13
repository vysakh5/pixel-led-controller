/*

Created by VYSAKH A V 
tested on node mcu
 Refrence 
    1)   #techiesms
  explore | learn | share
  visit  http://www.techiesms.com
  for IoT project tutorials.

  2) Youtube, Google

*/

#include <ESP8266WiFi.h>
#include <WiFiClient.h> 
#include <ESP8266WebServer.h>
#include <FastLED.h>
#define NUM_LEDS 50
#define DATA_PIN 3
CRGB leds[NUM_LEDS];

/* Set these to your desired credentials. */
const char *ssid = "hydrogen"; // You can change it according to your ease
const char *password = ""; // You can change it according to your ease

ESP8266WebServer server(80); // establishing server at port 80 (HTTP protocol's default port)

// Writing a simple HTML page.

char HTML[] = "<html> <head> <style> body{background-color: #0ac9e2; }.rb {background-color: rgb(217, 255, 0); border: 2px solid #18013b; border-radius: 8px; color: rgb(26, 21, 92); padding: 15px 32px; text-align: center;text-decoration: none;display: inline-block;}.ob {background-color: rgb(40, 36, 73); /* Green */border: 2px solid #7de20a; border-radius: 8px;color: white;padding: 15px 150px;text-align: center;text-decoration: none;display: inline-block;}h1{color: #eeff00;}</style></head><body><h1>PIXEL LED CONTROLLER</h1><a href=\" red\"  class=\" rb\" >RED</a> <a href=\" blu\"  class=\" rb\" >blue</a> <a href=\" gre\"  class=\" rb\" >Green</a>  <br><br><a href=\" yelo\"  class=\" rb\" >Yellow</a><a href=\" mag\"  class=\" rb\" >Magantha</a><br><br> <a href=\" cyn\"  class=\" rb\" >Cyan</a> <a href=\" wht\"  class=\" rb\" >White</a><br><br><a href=\" rai\"  class=\" rb\" >Rainbow</a> <a href=\" ran\"  class=\" rb\" >Random</a> <br><br><a href=\" off\"  class=\" ob\" >OFF</a> <br><br><h2>Created by Vysakh A.V </h2></body></html>"; // --> Simple HTML page

// This function will be called whenever anyone requests 192.168.4.1 within the local area connection of this ESP module.
void handleRoot() 
{
  server.send(200, "text/html",HTML);
}


void setup() {
	delay(1000);
  pinMode(14,OUTPUT);
	Serial.begin(115200);
	Serial.println();
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS); 
	Serial.print("Configuring access point...");
	/* You can remove the password parameter if you want the AP to be open. */
	WiFi.softAP(ssid, password); // --> This line will create a WiFi hotspot.

	IPAddress myIP = WiFi.softAPIP();
	Serial.print("AP IP address: ");
	Serial.println(myIP);
	server.on("/", handleRoot);
  server.on("/red",red);
  server.on("/blu",blu);
  server.on("/gre",gre);
  server.on("/yelo",yelo);
  server.on("/mag",mag);
  server.on("/cyn",cyn);
  server.on("/wht",wht);
   server.on("/rai",rai);
   server.on("/ran",ran);
  server.on("/off",off);
	server.begin();
	Serial.println("HTTP server started");
}

void loop() {
	server.handleClient();
}
