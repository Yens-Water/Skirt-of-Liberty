# Skirt-of-Liberty
"Skirt of Liberty" is a cooperative project from Asumi Kitahori and Yen Tzu Chang in Fashionable technology lecture. 
We developed work on the project together including the concept, handmade part, and programming. The way to interactive 
is dress on the skirt, then the a strip of LED blink up, however, it is not just a decoration, but also sending out 
the word “FREEDOM”. The interactive person have to turn a round again and again, and the camera take a picture on top 
in long term exposure to print out the word. Even people could not see the message by eyes, but they can see afterimage 
by camera. No matter the man, woman or third gender, all are welcomed to try on this works. We want to bring out the 
questions of gender equality, social stereotypes. Are we truly free in nowadays? Do our social go to the “right” 
direction?  
In the feature, we would like to develop more details, for instance, put sensor to detect the speed of rotating, 
collecting data of how many times people's rotating, and automatically take a photos by camera.   

Materials:  
- Skirt x1 
- Condoctive Thread 
-  Needle x1 
- Gemma Arduino x1 
- Flora NeoPixel x10 
- Lithium polymer battery x1 
- Velcro   

Technological Part:  
Fix Arduino problems 
1_We need to install the new arduino IDE(1.6.4). 
2_Download Adafruit_NeoPixel library (from here: https://learn.adafruit.com/flora-rgb-smart-pixels/run-pixel-test-code), 
then rename the fold and put in the arduino library. 
Now, we have port problems 
1_copy this link to reference->additional Boards Manager URLS
->https://adafruit.github.io/arduino-board-index/package_adafruit_index.json 
2_go to Board-> board manger->select type to contributed-> install the adafruit AVR Boards  
3_ Tools-> Programmer-> select “USBtinyISP” restart the IDE! 
4_choose the adafruit gemma 8hz 
5_example->Adafruit_NeoPixel->sample select the right pin from LED 
#define PIN            1 
#define NUMPIXELS      1  
Even the port button is grey, you still can input the code to Gemma arduino.

If you want to check our project code, please check this link:
https://github.com/Yens-Water/Skirt-of-Liberty

Special Thanks Ricardo Nascimento de Oliveira bring a nice workshop for Interface Culture.
<a href="http://imgur.com/3YOoTRg"><img src="http://i.imgur.com/3YOoTRg.jpg" title="source: imgur.com" /></a>
<a href="http://imgur.com/jTeMnV0"><img src="http://i.imgur.com/jTeMnV0.jpg" title="source: imgur.com" /></a>
<a href="http://imgur.com/yBHgNuk"><img src="http://i.imgur.com/yBHgNuk.jpg" title="source: imgur.com" /></a>
