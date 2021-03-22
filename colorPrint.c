#include "stdio.h"
#include "stdlib.h"
#include "colorPrint.h"

void resetColor() {
	printf("\033[0m");
}

int checkNullValue(int PARAM1, int PARAM2, int PARAM3) {
	int a = 0;
	int b = 0;
	int c = 0;

	if (PARAM1 == -1) {
		a = -1;
	}
	if (PARAM2 == -1) {
		b = -1;
	}
	if (PARAM3 == -1) {
		c = -1;
	}

	return a+b*10+c*100;
}

void printColor(int PARAM1, int PARAM2, int PARAM3, char* msg) {
	int checkNull = checkNullValue(PARAM1, PARAM2, PARAM3);

	switch (checkNull) {
		case 0:
			printf(ESCAPE_STRING"[%d;%d;%dm%s"ESCAPE_STRING"[0m", PARAM1, PARAM2, PARAM3, msg);
			break;

		case -1:
			printf(ESCAPE_STRING"[%d;%dm%s"ESCAPE_STRING"[0m", PARAM2, PARAM3, msg);
			break;

		case -10:
			printf(ESCAPE_STRING"[%d;%dm%s"ESCAPE_STRING"[0m", PARAM1, PARAM3, msg);
			break;

		case -11:
			printf(ESCAPE_STRING"[%dm%s"ESCAPE_STRING"[0m", PARAM3, msg);
			break;

		case -100:
			printf(ESCAPE_STRING"[%d;%dm%s"ESCAPE_STRING"[0m", PARAM1, PARAM2, msg);
			break;

		case -101:
			printf(ESCAPE_STRING"[%dm%s"ESCAPE_STRING"[0m", PARAM2, msg);
			break;

		case -110:
			printf(ESCAPE_STRING"[%dm%s"ESCAPE_STRING"[0m", PARAM1, msg);
			break;

		default:
			printf(ESCAPE_STRING"[0m%s", msg);
	}
}

void printColorNoR(int PARAM1, int PARAM2, int PARAM3, char* msg) {
	int checkNull = checkNullValue(PARAM1, PARAM2, PARAM3);

	switch (checkNull) {
		case 0:
			printf(ESCAPE_STRING"[%d;%d;%dm%s", PARAM1, PARAM2, PARAM3, msg);
			break;

		case -1:
			printf(ESCAPE_STRING"[%d;%dm%s", PARAM2, PARAM3, msg);
			break;

		case -10:
			printf(ESCAPE_STRING"[%d;%dm%s", PARAM1, PARAM3, msg);
			break;

		case -11:
			printf(ESCAPE_STRING"[%dm%s", PARAM3, msg);
			break;

		case -100:
			printf(ESCAPE_STRING"[%d;%dm%s", PARAM1, PARAM2, msg);
			break;

		case -101:
			printf(ESCAPE_STRING"[%dm%s", PARAM2, msg);
			break;

		case -110:
			printf(ESCAPE_STRING"[%dm%s", PARAM1, msg);
			break;

		default:
			printf("%s", msg);
	}
}