#include "parser.h"

char *next_token(char *str, char *token)
{
	static unsigned int i, d_aps_flag;
	static char *tmp, ret[BUFSIZE];
	int j = 0;

	if(str)
		tmp = str;
	while (tmp[i])
	{
		if (_strchr(token, tmp[i]))
			i++;
		if (tmp[i] == '"')
		{
			i++;
			while (tmp[i] != '"')
			{
				ret[j++] = tmp[i++];
			}
			break;
		}
		else
		{
			while (!_strchr(token, tmp[i]))
			{
				if (tmp[i] == '"')
					break;
				ret[j++] = tmp[i++];
			}
			break;
		}
	}
	if (!tmp[i])
		return (NULL);
	ret[j] = '\0';
	i++;
	return (ret);
}

int _strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
