/**
 *	\file colorPrint.h
 *	\brief Library for easisest colorful print in bash
 *
 *	This library's goal is to make print with color easiest as possible. This library is useless if
 *	your terminal do not support ANSI color code, because the essential of the library is based on
 *	characters escaping.
 *	\see https://github.com/SlightlySickDev/colorPrint
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/

#ifndef COLORPRINT_H
#define COLORPRINT_H

/** \def ESCAPE_STRING
 *	\brief Define for the escape string of bash shell
 *
 *	Define ESCAPE_STRING to "\033", the escape string to modify format and colors of a print in the
 * 	terminal
 *
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define ESCAPE_STRING		"\033"

/**	\def NULL_PARAM
 *	\brief Define for the null parameter
 *
 *	Define a value for null parameters in the function printColor. This value is equal to -1.
 *
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define NULL_PARAM			-1

/**	\def FORMAT_DEFAULT
 *	\brief Define the FORMAT_DEFAULT value
 *
 *	The value of FORMAT_DEFAULT is equal to 0
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_DEFAULT 		0

/**	\def FORMAT_BOLD
 *	\brief Define the FORMAT_BOLDvalue
 *
 *	The value of FORMAT_BOLD is equal to 1
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_BOLD 		1

/**	\def FORMAT_DIM
 *	\brief Define the FORMAT_DIM value
 *
 *	The value of FORMAT_DIM is equal to 2
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_DIM 			2

/**	\def FORMAT_ITALIC
 *	\brief Define the FORMAT_ITALIC value
 *
 *	The value of FORMAT_ITALIC is equal to 3
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_ITALIC 		3

/**	\def FORMAT_UNDERLINE
 *	\brief Define the FORMAT_UNDERLINE value
 *
 *	The value of FORMAT_UNDERLINE is equal to 4
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_UNDERLINE 	4

/**	\def FORMAT_BLINK
 *	\brief Define the FORMAT_BLINK value
 *
 *	The value of FORMAT_BLINK is equal to 5
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_BLINK		5

/**	\def FORMAT_SURLINE
 *	\brief Define the FORMAT_SURLINE value
 *
 *	The value of FORMAT_SURLINE is equal to 7
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_SURLINE		7

/**	\def FORMAT_HIDDEN
 *	\brief Define the FORMAT_HIDDEN value
 *
 *	The value of FORMAT_HIDDEN is equal to 8
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_HIDDEN		8

/**	\def FORMAT_CROSS
 *	\brief Define the FORMAT_CROSS value
 *
 *	The value of FORMAT_CROSS is equal to 9
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_CROSS		9

/**	\def FORMAT_DUNDERLINE
 *	\brief Define the FORMAT_DUNDERLINE value
 *
 *	The value of FORMAT_DUNDERLINE is equal to 21
 * 	\author Thomas Cocquebert
 * 	\date 22/03/2021
*/
#define FORMAT_DUNDERLINE	21

/**	\def BACK_COLOR_BLACK
 *	\brief Define the BACK_COLOR_BLACK value
 *
 *	The value of BACK_COLOR_BLACK is equal to 40
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_BLACK	40

/**	\def BACK_COLOR_RED
 *	\brief Define the BACK_COLOR_RED value
 *
 *	The value of BACK_COLOR_RED is equal to 41
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_RED		41

/**	\def BACK_COLOR_GREEN
 *	\brief Define the BACK_COLOR_GREEN value
 *
 *	The value of BACK_COLOR_GREEN is equal to 42
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_GREEN	42

/**	\def BACK_COLOR_YELLOW
 *	\brief Define the BACK_COLOR_YELLOW value
 *
 *	The value of BACK_COLOR_YELLOW is equal to 43
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_YELLOW	43

/**	\def BACK_COLOR_BLUE
 *	\brief Define the BACK_COLOR_BLUE value
 *
 *	The value of BACK_COLOR_BLUE is equal to 44
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_BLUE		44

/**	\def BACK_COLOR_PURPLE
 *	\brief Define the BACK_COLOR_PURPLE value
 *
 *	The value of BACK_COLOR_PURPLE is equal to 45
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_PURPLE	45

/**	\def BACK_COLOR_CYAN
 *	\brief Define the BACK_COLOR_CYAN value
 *
 *	The value of BACK_COLOR_CYAN is equal to 46
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_CYAN		46

/**	\def BACK_COLOR_WHITE
 *	\brief Define the BACK_COLOR_WHITE value
 *
 *	The value of BACK_COLOR_WHITE is equal to 47
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define BACK_COLOR_WHITE 	47
/**	\def TEXT_COLOR_BLACK
 *	\brief Define the TEXT_COLOR_BLACK value
 *
 *	The value of TEXT_COLOR_BLACK is equal to 30
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_BLACK	30

/**	\def TEXT_COLOR_RED
 *	\brief Define the TEXT_COLOR_RED value
 *
 *	The value of TEXT_COLOR_RED is equal to 31
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_RED		31

/**	\def TEXT_COLOR_GREEN
 *	\brief Define the TEXT_COLOR_GREEN value
 *
 *	The value of TEXT_COLOR_GREEN is equal to 32
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_GREEN	32

/**	\def TEXT_COLOR_YELLOW
 *	\brief Define the TEXT_COLOR_YELLOW value
 *
 *	The value of TEXT_COLOR_YELLOW is equal to 33
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_YELLOW	33

/**	\def TEXT_COLOR_BLUE
 *	\brief Define the TEXT_COLOR_BLUE value
 *
 *	The value of TEXT_COLOR_BLUE is equal to 34
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_BLUE		34

/**	\def TEXT_COLOR_PURPLE
 *	\brief Define the TEXT_COLOR_PURPLE value
 *
 *	The value of TEXT_COLOR_PURPLE is equal to 35
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_PURPLE	35

/**	\def TEXT_COLOR_CYAN
 *	\brief Define the TEXT_COLOR_CYAN value
 *
 *	The value of TEXT_COLOR_CYAN is equal to 36
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_CYAN		36

/**	\def TEXT_COLOR_WHITE
 *	\brief Define the TEXT_COLOR_WHITE value
 *
 *	The value of TEXT_COLOR_WHITE is equal to 37
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
#define TEXT_COLOR_WHITE	37

/**
 * 	Reset the printing oprion to default
 *
 * 	The function is reseting the printing option to default by the option [0m
 *
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
void resetColor();

/**
 *	Checking the number of null parameter for the printColor function
 *
 *	Check wich parameters are set to the NULL_PARAM values.
 *	The function check if a parameter is set to -1. If a parameter is set to -1, it's multiply by
 *	a certain coefficient depending of its place.
 *	Ex : 	PARAM1 = -1, PARAM2 = -1, PARAM3 = -1
 *			res = PARAM1 + PARAM2 * 10 + PARAM3 * 100
 *			res = 111
 *	To make the function work, users need to put parameters in the same order of the function
 *	printColor.
 *
 *	\param PARAM1 the first parameter to check
 *	\param PARAM2 the second parameter to check
 *	\param PARAM3 the third parameter to check
 *	\return the code of the NULL_PARAM value parameters
 *
 *	\author Thomas Cocquebert
 *	\date	22/03/2021
*/
int checkNullValue(int PARAM1, int PARAM2, int PARAM3);

/**
 * 	Print a message with the specified color and format
 *
 * 	Print the message msg with the specific parameters.
 * 	Users can enter defined values for FORMAT, BACK_COLOR, TEXT_COLOR or NULL_PARAM.
 *	If users enter only NULL_PARAM in parameters field, the message will be print with default
 *	parameters ([0m).
 *	The function is a giant switch with 8 switch case. Each switch case adapt his behaviour with
 * 	the result of the checkNullValue function.
 *
 * 	\param PARAM1 the first parameter of the printed message
 *	\param PARAM2 the second parameter of the printed message
 *	\param PARAM3 the third parameter of the printed message
 *	\param msg the message users need to print
 *	
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
void printColor(int PARAM1, int PARAM2, int PARAM3, char* msg);

/**
 *	Print a message with the specified color and format but don't reset the printing otpion after
 *
 * 	Print the message msg with the specific parameters but do not reset the parameters after
 *	printing.
 * 	Users can enter defined values for FORMAT, BACK_COLOR, TEXT_COLOR or NULL_PARAM.
 *	If users enter only NULL_PARAM in parameters field, the message will be print with a normal
 *	printf.
 *	The function is a giant switch with 8 switch case. Each switch case adapt his behaviour with
 * 	the result of the checkNullValue function.
 *
 * 	\param PARAM1 the first parameter of the printed message
 *	\param PARAM2 the second parameter of the printed message
 *	\param PARAM3 the third parameter of the printed message
 *	\param msg the message users need to print
 *	
 *	\author Thomas Cocquebert
 *	\date 22/03/2021
*/
void printColorNoR(int PARAM1, int PARAM2, int PARAM3, char* msg);

#endif