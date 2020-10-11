/*
 * Name          : GP2Y0D8xxZ0F.ino
 * @author       : Roberto D'Amico (Bobboteck)
 * Last modified : 11.10.2020
 * Revision      : 1.0.0
 *
 * Modification History:
 * Date         Version     Modified By		Description
 * 2020-10-11   1.0.0       Roberto D'Amico Code example to use the GP2Y0D8xxZ0F board with Arduino
 * 
 * Description:
 * This code is writed to be used with ARLO or ARLOK Robot, use the LED_BUILTIN 
 * to show sensor status, pin 11 as output to drive the Enable PIN of Board and
 * pin 12 as input to check the GP2Y0D8xxZ0F sensor status.
 * This example not provide control of sensor Enable.
 * 
 * The MIT License (MIT)
 *
 *  This file is part of the JoyStick Project (https://github.com/bobboteck/JoyStick).
 *	Copyright (c) 2015 Roberto D'Amico (Bobboteck).
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#define GP2Y0D8XXZ0F_ENABLE 11
#define GP2Y0D8XXZ0F_OUTPUT 12

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(GP2Y0D8XXZ0F_ENABLE, OUTPUT);
    pinMode(GP2Y0D8XXZ0F_OUTPUT, INPUT);

    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(GP2Y0D8XXZ0F_ENABLE, HIGH);
}

void loop()
{
    if(digitalRead(GP2Y0D8XXZ0F_OUTPUT) == HIGH)
    {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else
    {
        digitalWrite(LED_BUILTIN, LOW);
    }
    
    delay(200);
}
