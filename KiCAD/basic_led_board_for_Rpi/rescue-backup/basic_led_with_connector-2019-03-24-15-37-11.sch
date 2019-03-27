EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:basic_led_with_connector-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LED D1
U 1 1 5C9743F7
P 3500 2150
F 0 "D1" H 3500 2250 50  0000 C CNN
F 1 "LED" H 3500 2050 50  0000 C CNN
F 2 "LEDs:LED-3MM" H 3500 2150 50  0001 C CNN
F 3 "" H 3500 2150 50  0000 C CNN
	1    3500 2150
	0    -1   -1   0   
$EndComp
$Comp
L LED D2
U 1 1 5C9744E9
P 4200 2150
F 0 "D2" H 4200 2250 50  0000 C CNN
F 1 "LED" H 4200 2050 50  0000 C CNN
F 2 "LEDs:LED-3MM" H 4200 2150 50  0001 C CNN
F 3 "" H 4200 2150 50  0000 C CNN
	1    4200 2150
	0    -1   -1   0   
$EndComp
$Comp
L R R1
U 1 1 5C974519
P 3500 2850
F 0 "R1" V 3580 2850 50  0000 C CNN
F 1 "R" V 3500 2850 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 3430 2850 50  0001 C CNN
F 3 "" H 3500 2850 50  0000 C CNN
	1    3500 2850
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 5C97457F
P 4200 2850
F 0 "R2" V 4280 2850 50  0000 C CNN
F 1 "R" V 4200 2850 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4130 2850 50  0001 C CNN
F 3 "" H 4200 2850 50  0000 C CNN
	1    4200 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 3000 3500 3050
Wire Wire Line
	3500 3050 5750 3050
Wire Wire Line
	4200 3050 4200 3000
Wire Wire Line
	3500 2700 3500 2350
Wire Wire Line
	4200 2700 4200 2350
$Comp
L CONN_02X05 P1
U 1 1 5C9745E5
P 6000 2300
F 0 "P1" H 6000 2600 50  0000 C CNN
F 1 "CONN_02X05" H 6000 2000 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_2x05" H 6000 1100 50  0001 C CNN
F 3 "" H 6000 1100 50  0000 C CNN
	1    6000 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 2100 5750 1300
Wire Wire Line
	5750 1300 3500 1300
Wire Wire Line
	3500 1300 3500 1950
Wire Wire Line
	5750 2200 5550 2200
Wire Wire Line
	5550 2200 5550 1550
Wire Wire Line
	5550 1550 4200 1550
Wire Wire Line
	4200 1550 4200 1950
Wire Wire Line
	5750 3050 5750 2500
Connection ~ 4200 3050
NoConn ~ 6250 2100
NoConn ~ 6250 2200
NoConn ~ 6250 2300
NoConn ~ 6250 2400
NoConn ~ 6250 2500
NoConn ~ 5750 2400
NoConn ~ 5750 2300
$EndSCHEMATC
