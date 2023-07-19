#include<stdio.h>

/**
 * main - fibonacci
 *
 * Purpose - hard fibonacci
 *
 * Return:  (Success)
 */

int main(void)
{
unsigned long int counter;
unsigned long int previous = 1;
unsigned long int current = 2;
unsigned long int largeNum = 1000000000;
unsigned long int prevHigh;
unsigned long int prevLow;
unsigned long int currHigh;
unsigned long int currLow;

printf("%lu", previous);

for (counter = 1; counter < 91; counter++)
{
printf(", %lu", current);
current += previous;
previous = current - previous;
}

prevHigh = (previous / largeNum);
prevLow = (previous % largeNum);
currHigh = (current / largeNum);
currLow = (current % largeNum);

for (counter = 92; counter < 99; counter++)
{
printf(", %lu", currHigh + (currLow / largeNum));
printf("%lu", currLow % largeNum);
currHigh = currHigh + prevHigh;
prevHigh = currHigh - prevHigh;
currLow = currLow + prevLow;
prevLow = currLow - prevLow;
}

printf("\n");
return (0);
}

