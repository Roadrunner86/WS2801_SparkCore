/**
 ******************************************************************************
 * @file    application.cpp
 * @authors  Satish Nair, Zachary Crockett and Mohit Bhoite
 * @version V1.0.0
 * @date    05-November-2013
 * @brief   Tinker application
 ******************************************************************************
  Copyright (c) 2013 Spark Labs, Inc.  All rights reserved.

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/  
#include "application.h"
#include "WS2801.h"

void chaserLight(uint32_t);

int STRIP_LED_COUNT = 25;

// Set the first variable to the NUMBER of pixels. 25 pixels in a row
WS2801 strip = WS2801(STRIP_LED_COUNT);

/* This function is called once at start up ----------------------------------*/
void setup()
{	
	//this is default
	strip.begin();
}

/* This function loops forever --------------------------------------------*/
void loop()
{
		
	strip.setPixelColorAll(0xff, 0x00, 0x00);
	strip.show();
	delay(500);
	strip.setPixelColorAll(0x00, 0xff, 0x00);
	strip.show();
	delay(500);
	strip.setPixelColorAll(0x00, 0x00, 0xff);
	strip.show();
	delay(500);
	strip.setPixelColorAll(0x00, 0x00, 0x00);
	strip.show();
	delay(500);
	
	chaserLight(0xff0000);
	chaserLight(0x00ff00);
	chaserLight(0x0000ff);
	chaserLight(0x000000);
}

void chaserLight(uint32_t c)
{
	for(int i=0; i<STRIP_LED_COUNT; i++)
	{
		strip.setPixelColor(i, c);
		strip.show();
		delay(100);
	}
	
}


