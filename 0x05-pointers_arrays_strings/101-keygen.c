#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Generates random valid passwords
*
* Return: Always 0 (Success)
*/
int main(void)
{
int randNum;
int total;
srand((unsigned int)(time(NULL)));
for (total = 2772; total >= 122; total -= randNum)
{
randNum = (rand() % 94) + 33;
printf("%c", randNum);
}
printf("%c", total);
return (0);
}

