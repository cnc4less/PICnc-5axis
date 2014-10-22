/*    Copyright (C) 2014 GP Orcullo
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __HARDWARE_H__
#define __HARDWARE_H__

#define SYS_FREQ		(48000000ul)    /* 48 MHz */
#define GetSystemClock()	(SYS_FREQ)
#define	GetPeripheralClock()	(GetSystemClock())
#define	GetInstructionClock()	(GetSystemClock())

#define SPICHAN			2

/*    PORT USAGE (pin numbers for a 44 quad flat part)
 *
 *	Pin 	Port	Dir 	Signal-notes
 *
 *	19  	RA0  	OUT  	OUT4-PWM-Laser_power
 *	20  	RA1		OUT		OUT5-PWM-Lights	
 * 	30  	RA2  	OUT 	OUT13-Astep
 * 	31  	RA3  	OUT 	OUT14-Zdir
 * 	34  	RA4  	OUT 	OUT17-Ystep
 * 	13  	RA7  	OUT 	OUT3-Laser_fire
 *	32  	RA8  	OUT 	OUT15-Zstep
 * 	35  	RA9  	OUT 	OUT18-Xdir
 * 	12		RA10 	OUT 	OUT2-Beeper
 *
 * 	21  	RB0  	OUT 	OUT6-PWM-Air_valve
 * 	22  	RB1  	OUT 	OUT7_PS_on
 * 	23  	RB2  	OUT 	OUT8
 * 	24  	RB3  	OUT 	OUT9
 * 	33  	RB4  	OUT 	OUT16-Ydir
 * 	41  	RB5  	IN   	IN3-I2C_fault
 * 	42  	RB6  	IN   	IN4-Door
 * 	43  	RB7  	IN   	IN5-Laser_off
 * 	44  	RB8  	IN   	IN6-Ablock
 * 	1    	RB9  	IN   	IN7
 * 	8    	RB10  	IN   	IN12-Xhome
 * 	9   	RB11	SPI 	MISO
 * 	10  	RB12  	OUT   	OUT1-Enable
 * 	11   	RB13	SPI 	MOSI
 * 	14   	RB14	SPI 	CS
 * 	15   	RB15	SPI 	Sclk
 *
 * 	25  	RC0  	OUT   	OUT10-Bdir
 * 	26  	RC1  	OUT   	OUT11-Bstep
 * 	27  	RC2  	OUT   	OUT12-Adir
 * 	36  	RC3  	OUT   	OUT19-Xstep
 * 	37    	RC4  	IN   	IN1-Stop
 * 	38    	RC5  	IN   	IN2-EPO
 * 	2    	RC6  	IN   	IN8-Bhome
 * 	3    	RC7  	IN   	IN9-Ahome
 * 	4    	RC8  	IN   	IN10-Zhome
 * 	5    	RC9  	IN   	IN11-Yhome
 *
 */

#define LED_TOGGLE		(LATBINV = BIT_5)
//#define LED_TOGGLE

#define STOP_IN			(PORTBbits.RB5)
#define HOME_A_IN		(PORTBbits.RB6)
#define HOME_X_IN		(PORTBbits.RB9)
#define HOME_Y_IN		(PORTBbits.RB8)
#define HOME_Z_IN		(PORTBbits.RB7)

#define ENABLE_LO		(LATBCLR = BIT_2)
#define ENABLE_HI		(LATBSET = BIT_2)
#define SPINDLE_EN_LO		(LATACLR = BIT_0)
#define SPINDLE_EN_HI		(LATASET = BIT_0)
#define MIST_EN_LO		(LATACLR = BIT_1)
#define MIST_EN_HI		(LATASET = BIT_1)
#define FLOOD_EN_LO		(LATBCLR = BIT_0)
#define FLOOD_EN_HI		(LATBSET = BIT_0)

#define STEP_X_LO		(LATACLR = BIT_4)
#define STEP_X_HI		(LATASET = BIT_4)
#define DIR_X_LO		(LATBCLR = BIT_4)
#define DIR_X_HI		(LATBSET = BIT_4)

#define STEP_Y_LO		(LATBCLR = BIT_12)
#define STEP_Y_HI		(LATBSET = BIT_12)
#define DIR_Y_LO		(LATBCLR = BIT_10)
#define DIR_Y_HI		(LATBSET = BIT_10)

#define STEP_Z_LO		(LATACLR = BIT_2)
#define STEP_Z_HI		(LATASET = BIT_2)
#define DIR_Z_LO		(LATACLR = BIT_3)
#define DIR_Z_HI		(LATASET = BIT_3)

#define STEP_A_LO		(LATBCLR = BIT_3)
#define STEP_A_HI		(LATBSET = BIT_3)
#define DIR_A_LO		(LATBCLR = BIT_1)
#define DIR_A_HI		(LATBSET = BIT_1)

#endif /* __HARDWARE_H__ */