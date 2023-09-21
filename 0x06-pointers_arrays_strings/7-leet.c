/**
 * *leet - a function that encodes a string into 1337
 * @str: pointer to a string
 *
 * Return: pointer to a string str
 */

char *leet(char *str)
{
	char *cp = str;
	unsigned int i;
	char s[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < sizeof(s) / sizeof(char); ++i)
		{
			if (*str == s[i] || *str == s[i] + 32)
			{
				*str = value[i] + 48;
			}
		}
		str++;
	}
	return (cp);
}
