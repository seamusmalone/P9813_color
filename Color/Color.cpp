/*****************************************************************************
 * Color.cpp
 *
 * Copyright 2011 Seamus Malone

Color BLACK = Color(0x00,0x00,0x00);
Color WHITE = Color(0xff,0xff,0xff);

Color RED = Color(0xff,0x00,0x00);
Color GREEN = Color(0x00,0xff,0x00);
Color BLUE = Color(0x00,0x00,0xff);

Color YELLOW = Color(0xff,0xff,0x00);
Color PURPLE = Color(0xa0,0x20,0xf0);

Color::Color(byte *bytes)
{
   _redByte = bytes[0];
   _greenByte = bytes[1];
   _blueByte = bytes[2];
}




void Color::fade(int percent)
{
//	redByte = redByte*(percent/100);
//	greenByte = greenByte*(percent/100);
//	blueByte = blueByte*(percent/100);
}

void Color::tint(Color tintColor, int percent)
{
	int lessPercent = 100 - percent;
//    redByte = (redByte * lessPercent) + (tintColor.getRedByte() * percent);
//    greenByte = (greenByte * lessPercent) + (tintColor.getGreenByte() * percent);
//    blueByte = (blueByte * lessPercent) + (tintColor.getBlueByte() * percent);
}




 ****************************************************************************/

#include "WProgram.h"
#include "Color.h"
#include <SoftwareSerial.h>


Color::Color()
{
   _redByte = random(256);
   _greenByte = random(256);
   _blueByte = random(256);
}


Color::Color(byte redByte, byte greenByte, byte blueByte)
{
   _redByte = redByte;
   _greenByte = greenByte;
   _blueByte = blueByte;
}

Color::Color(String colorName)
{
	if (colorName=="White") Color(0xff,0xff,0xff);   	
	if (colorName=="Black") Color(0x00,0x00,0x00);
	if (colorName=="Orange") Color(0xff,0xa5,0x00);
}

byte Color::getRedByte() 
{
	return _redByte;
}

byte Color::getGreenByte() 
{
	return _greenByte;
}

byte Color::getBlueByte() 
{
	return _blueByte;
}

void serialPrint() {
 //     Serial.print(getRedByte(),HEX);
 //     Serial.print(" ");
 //     Serial.print(getGreenByte(),HEX);
 //     Serial.print(" ");
 //     Serial.print(getBlueByte(),HEX);
 //     Serial.println();
}
