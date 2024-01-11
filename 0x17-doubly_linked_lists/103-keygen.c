#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a key for a given username based on the
 *                crackme5 algorithm.
 * @username: The username for which to generate the key.
 *
 * Return: The generated key.
 */
int generate_key(const char *username)
{
	int length = strlen(username);
	int key = ((length ^ 59) & 63) + 32;
	int i;

	for (i = 0; i < length; i++)
	{
		if (username[i] % 2 == 0)
		{
			key += 1;
		}
	}
	key = ((key ^ 0x4f) & 63) + 32;
	return (key);
}

/**
 * main - Entry point for the keygen program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int key;

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}

	key = generate_key(argv[1]);
	printf("%d\n", key);

	return (0);
}

