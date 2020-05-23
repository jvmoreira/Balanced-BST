#include <stdio.h>

#define ERROR_COLOR "1;31m"
#define SUCCESS_COLOR "1;32m"

void setColorMode() {
	printf("\x1b[");
}

void resetColorMode() {
	printf("\x1b[0m");
}

void printError(char *text) {
	setColorMode();
	printf(ERROR_COLOR);
	printf("%s", text);
	resetColorMode();
}

void printSuccess(char *text) {
	setColorMode();
	printf(SUCCESS_COLOR);
	printf("%s", text);
	resetColorMode();
}

