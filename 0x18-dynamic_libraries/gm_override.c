#include <stdio.h>
#include <stdarg.h>

int rand() {
	static int counter = -1; // Counter to keep track of calls
	int winning_numbers[] = {9, 8, 10, 24, 75, 9}; // Winning numbers
	counter++;
	return winning_numbers[counter % 6]; // Return winning numbers sequentially
}

