#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generate a key based on a username for crackme5
 * @argc: Number of arguments passed
 * @argv: Arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int idx, sum, prod, max_char;
	size_t length, square_sum;
	char *key_chars = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen username\n");
		return (1);
	}
	length = strlen(argv[1]);
	key[0] = key_chars[(length ^ 59) & 63];

	for (idx = 0, sum = 0; idx < length; idx++)
		sum += argv[1][idx];
	key[1] = key_chars[(sum ^ 79) & 63];

	for (idx = 0, prod = 1; idx < length; idx++)
		prod *= argv[1][idx];
	key[2] = key_chars[(prod ^ 85) & 63];

	for (max_char = argv[1][0], idx = 0; idx < length; idx++)
		if ((char)max_char <= argv[1][idx])
			max_char = argv[1][idx];
	srand(max_char ^ 14);
	key[3] = key_chars[rand() & 63];

	for (square_sum = 0, idx = 0; idx < length; idx++)
		square_sum += argv[1][idx] * argv[1][idx];
	key[4] = key_chars[(square_sum ^ 239) & 63];

	for (sum = 0, idx = 0; (char)idx < argv[1][0]; idx++)
		sum = rand();
	key[5] = key_chars[(sum ^ 229) & 63];

	printf("%s\n", key);
	return (0);
}

