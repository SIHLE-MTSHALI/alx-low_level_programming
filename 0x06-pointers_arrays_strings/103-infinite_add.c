#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;
if (i > size_r || j > size_r)
return (0);
i--;
j--;
l = 0;
for (k = 0; k < size_r - 1; k++, i--, j--)
{
m = l;
if (i >= 0)
m += n1[i] - '0';
if (j >= 0)
m += n2[j] - '0';
if (i < 0 && j < 0 && m == 0)
{
break;
}
l = m / 10;
r[k] = m % 10 + '0';
}
r[k] = '\0';
if (l > 0 || k == size_r)
return (0);
for (i = 0, j = k - 1; i < j; i++, j--)
{
n = r[i];
r[i] = r[j];
r[j] = n;
}
return (r);
}

