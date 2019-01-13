


void red()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(255,0,0);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}

void blu()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(0,0,255);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}

void gre()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(0,255,0);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
void yelo()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(255,255,0);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
void mag()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(255,0,255);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
void cyn()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(0,255,255);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
void wht()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(255,255,255);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
void rai()
{
   int i = 0;
 int a = 0;
 for(i=0;i<NUM_LEDS;i++)
 {
  if(i<8){
  leds[i] = CRGB(148,0,211);
    FastLED.show();
    
  }else if(i>7&&i<14){
    leds[i] = CRGB(75,0,130);
    FastLED.show();
  }else if(i>13&&i<21){
    leds[i] = CRGB(0,0,255);
    FastLED.show();
  }else if(i>20&&i<28){
    leds[i] = CRGB(0,255,0);
    FastLED.show();
  }else if(i>27&&i<35){
    leds[i] = CRGB(255,255,0);
    FastLED.show();
  }else if(i>34&&i<42){
    leds[i] = CRGB(255,127,0);
    FastLED.show();
  }else if(i>41&&i<50){
    leds[i] = CRGB(255,0,0);
    FastLED.show();
  }
    
 }
}

void ran()
{
   int r = 255;
int g = random(50,255);
int b = random(0,200);
int no = random(0,50);
 
    leds[no] = CRGB(r,g,b);
    FastLED.show();
    delay(10);
  
}
void off()
{
  int led = 0;
  for(led=0;led<NUM_LEDS;led=led+1)
  {
    leds[led] = CRGB(0,0,0);
    FastLED.show();
    

   //leds[led] = CRGB::Black;
   
  }
  server.send(200, "text/html",HTML);
}
