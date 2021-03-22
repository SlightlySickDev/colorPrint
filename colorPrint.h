#ifndef COLORPRINT_H
#define COLORPRINT_H

/** \def ESCAPE_STRING
 *	\brief #define for the escape string for bash shell
 *
 *	Define ESCAPE_STRING to "\033", the escape string to modify format and colors of a print in the
 * 	terminal
 *
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
#define ESCAPE_STRING		"\033"

/**	\def NULL_PARAM
 *	\brief #define for a null parameter
 *
 *	Define a value for null parameters in the function printColor. This value is equal to -1.
 *
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
#define NULL_PARAM			-1

/** \def FORMAT
 *	\brief Define different format available
 *
 *	This #define are use to control the format of the print. There are 10 possibilities :
 *	FORMAT_DEFAULT
 *	FORMAT_BOLD
 *	FORMAT_DIM
 *	FORMAT_ITALIC
 *	FORMAT_UNDERLINE
 *	FORMAT_BLINK
 *	FORMAT_SURLINE
 *	FORMAT_HIDDEN
 *	FORMAT_CROSS
 *	FORMAT_DUNDERLINE
 *
 * 	@author Thomas Cocquebert
 * 	@date 22/03/2021
*/
#define FORMAT_DEFAULT 		0
#define FORMAT_BOLD 		1
#define FORMAT_DIM 			2
#define FORMAT_ITALIC 		3
#define FORMAT_UNDERLINE 	4
#define FORMAT_BLINK		5
#define FORMAT_SURLINE		7
#define FORMAT_HIDDEN		8
#define FORMAT_CROSS		9
#define FORMAT_DUNDERLINE	21

/** \def BACK_COLOR
 *	\brief Define different background color available
 *
 *	This #define are use to control the background color of the print. There are 8 possibilities :
 *	BACK_COLOR_BLACK	
 *	BACK_COLOR_RED
 *	BACK_COLOR_GREEN
 *	BACK_COLOR_YELLOW
 *	BACK_COLOR_BLUE
 *	BACK_COLOR_PURPLE
 *	BACK_COLOR_CYAN
 *	BACK_COLOR_WHITE
 *	
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
#define BACK_COLOR_BLACK	40
#define BACK_COLOR_RED		41
#define BACK_COLOR_GREEN	42
#define BACK_COLOR_YELLOW	43
#define BACK_COLOR_BLUE		44
#define BACK_COLOR_PURPLE	45
#define BACK_COLOR_CYAN		46
#define BACK_COLOR_WHITE	47

/** \def TEXT_COLOR
 *	\brief Define different text color available
 *
 *	This #define are use to control the text color of the print. There are 8 possibilities :
 *	TEXT_COLOR_BLACK
 *	TEXT_COLOR_RED
 *	TEXT_COLOR_GREEN
 *	TEXT_COLOR_YELLOW
 *	TEXT_COLOR_BLUE
 *	TEXT_COLOR_PURPLE
 *	TEXT_COLOR_CYAN
 *	TEXT_COLOR_WHITE
 *
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
#define TEXT_COLOR_BLACK	30
#define TEXT_COLOR_RED		31
#define TEXT_COLOR_GREEN	32
#define TEXT_COLOR_YELLOW	33
#define TEXT_COLOR_BLUE		34
#define TEXT_COLOR_PURPLE	35
#define TEXT_COLOR_CYAN		36
#define TEXT_COLOR_WHITE	37

/**
 * 	resetColor function
 *
 * 	Reset the printed color to default ([0m just after the escape with \033).
 *
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
void resetColor();

/**
 *	checkNullValue function
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
 *	@param PARAM1 the first parameter to check
 *	@param PARAM2 the second parameter to check
 *	@param PARAM3 the third parameter to check
 *	@return the code of the NULL_PARAM value parameters
 *
 *	@author Thomas Cocquebert
 *	@date	22/03/2021
*/
int checkNullValue(int PARAM1, int PARAM2, int PARAM3);

/**
 * 	printColor function
 *
 * 	Print the message msg with the specific parameters.
 * 	Users can enter defined values for FORMAT, BACK_COLOR, TEXT_COLOR or NULL_PARAM.
 *	If users enter only NULL_PARAM in parameters field, the message will be print with default
 *	parameters ([0m).
 *
 * 	@param PARAM1 the first parameter of the printed message
 *	@param PARAM2 the second parameter of the printed message
 *	@param PARAM3 the third parameter of the printed message
 *	@param msg the message users need to print
 *	
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
void printColor(int PARAM1, int PARAM2, int PARAM3, char* msg);

/**
 * 	printColorNoR function
 *
 * 	Print the message msg with the specific parameters but do not reset the parameters after
 *	printing.
 * 	Users can enter defined values for FORMAT, BACK_COLOR, TEXT_COLOR or NULL_PARAM.
 *	If users enter only NULL_PARAM in parameters field, the message will be print with a normal
 *	printf.
 *
 * 	@param PARAM1 the first parameter of the printed message
 *	@param PARAM2 the second parameter of the printed message
 *	@param PARAM3 the third parameter of the printed message
 *	@param msg the message users need to print
 *	
 *	@author Thomas Cocquebert
 *	@date 22/03/2021
*/
void printColorNoR(int PARAM1, int PARAM2, int PARAM3, char* msg);

#endif