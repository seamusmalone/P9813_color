/*
  Color.h
  
  wrapper Object holds 3bytes of rgb and utilities for manipulating them.

    Color _BLACK;
	Color _WHITE;

	Color _RED;
	Color _GREEN;
	Color _BLUE;

	Color _YELLOW;
	Color _ORANGE;
	Color _PURPLE;

#ifndef Color_h
#define Color_h

#include "WProgram.h"

class Color
{
  public:
    Color(byte *bytes);
    Color(byte redByte, byte greenByte, byte blueByte);
	byte getRedByte();
	byte getGreenByte();
	byte getBlueByte();
    void fade(int percent);
    void tint(Color tintColor, int percent);
  private:
	byte _redByte;
	byte _greenByte;
	byte _blueByte;
};

#endif

*/

#ifndef Color_h
#define Color_h

#include "WProgram.h"

class Color
{
  public:
    Color();
    Color(byte redByte, byte greenByte, byte blueByte);
	Color(String colorName);
	byte getRedByte();
	byte getGreenByte();
	byte getBlueByte();
	void serialPrint();
  private:
	byte _redByte;
	byte _greenByte;
	byte _blueByte;
};

#endif