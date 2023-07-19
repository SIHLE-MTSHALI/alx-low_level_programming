#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, m;
unsigned long i = 1, j = 2, t, s;
unsigned long i_start, j_start, t_start, s_start;
printf("%lu, %lu", i, j);
for (count = 3; count <= 92; count++)
{
t = i + j;
i = j;
j = t;
printf(", %lu", j);
}
i_start = i / 1000000000000000;
j_start = j / 1000000000000000;
i %= 1000000000000000;
j %= 1000000000000000;
for (; count <= 98; count++)
{
t_start = i_start;
t = i;
s_start = j_start + i_start + ((i + j) / 1000000000000000);
s = (i + j) % 1000000000000000;
printf(", %lu", s_start);
m = 16 - (s > 0 ? (int)log10((double)s) : 0);
while (m--)
printf("0");
printf("%lu", s);
i_start = j_start;
i = j;
j_start = s_start;
j = s;
}
printf("\n");
return (0);
}

