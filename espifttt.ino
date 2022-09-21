#include <ESP8266WiFi.h>

const char* ssid = "enter your ssid";
const char* password = "enter your password";
const char* host = "maker.ifttt.com";

void setup() {
   Serial.begin(115200);
   Serial.println("Email from Node Mcu");
   delay(100);
   Serial.print("Connecting to ");
   Serial.println(ssid);
   WiFi.begin(ssid, password);
   while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
   }
   Serial.println("");
   Serial.println("IP address: ");
   Serial.println(WiFi.localIP()); 
}
void loop() { 
        WiFiClient client;
        const int httpPort = 80; 
         if (!client.connect(host, httpPort)) { 
               Serial.println("connection failed"); 
         return;}
        if(Serial.available()){
         char a=Serial.read();
         if (a=='s'){
                 String url = "/trigger/alarm/json/with/key/ivdsiNm4uRwJ6ybhiwDdBlZ9Hc0psmIKocL0MxxX4Ye";
                 Serial.print("Requesting URL: ");
                 Serial.println(url);
                 client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                                   "Host: " + host + "\r\n" +  
                                          "Connection: close\r\n\r\n");   
                                   } 
         else{
           Serial.println("Correct character not pressed.Try again");
         }
         }
         delay(1000);
}
#include <ESP8266WiFi.h>

const char* ssid = "moo";
const char* password = "26022004";
const char* host = "maker.ifttt.com";

void setup() {
   Serial.begin(115200);
   Serial.println("Email from Node Mcu");
   delay(100);
   Serial.print("Connecting to ");
   Serial.println(ssid);
   WiFi.begin(ssid, password);
   while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
   }
   Serial.println("");
   Serial.println("IP address: ");
   Serial.println(WiFi.localIP()); 
}
void loop() { 
        WiFiClient client;
        const int httpPort = 80; 
         if (!client.connect(host, httpPort)) { 
               Serial.println("connection failed"); 
         return;}
        if(Serial.available()){
         char a=Serial.read();
         if (a=='m'){
                 String url = "/trigger/alarm/json/with/key/ivdsiNm4uRwJ6ybhiwDdBlZ9Hc0psmIKocL0MxxX4Ye";
                 Serial.print("Requesting URL: ");
                 Serial.println(url);
                 client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                                   "Host: " + host + "\r\n" +  
                                          "Connection: close\r\n\r\n");   
                                   } 
         else{
           Serial.println("Correct character not pressed.Try again");
         }
         }
         delay(1000);
}
