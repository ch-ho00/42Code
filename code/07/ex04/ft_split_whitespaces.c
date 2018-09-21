#include <stdlib.h>
#include <stdio.h>
int whitespace(char c)
{
	if (c == ' ' ||  c == '\t' || c == '\n')
		return 1;
	return 0;
}

int numword(char *str)
{
	int out;

	out = 0;
	while(whitespace(*str))
		str++;
	while(*(str + 1) != '\0')
	{
		if (whitespace(*str) && !(whitespace(*(str +1))))
			out++;
		str++;
	}
	return out + 1;
}

char **create_space(char *str)
{
	char **out;
	int count;
   	int space;
	int cc;
	out = (char **)malloc(sizeof(char *) * numword(str));
	count = 0;
	space = 0;
	cc = 0;
	while(whitespace(*str))
		str++;
	while (*(str + count) != '\0')
	{
		if (whitespace(*(str + count)) || *(str + count + 1) == '\0')
		{
			out[space] = (char *)malloc(sizeof(char) * (cc + 1));
			out[space][cc] = '\0';
			cc = 0;
			space ++;
		}
		else
			cc++;
		count++;
	}
	return out;
}
char **split (char *str)
{
	char **out;
	int space;
	int count;
	int cc;

	out = create_space(str);
	count = 0;
	space = 0;
	cc = 0;
	while (whitespace(*str))
		str++;
	while (*(str + count) != '\0')
	{
		if (whitespace(*(str + count)))
		{
		    space++;
		    cc = 0;
		    count++;
		    continue;
		}
		else
			out[space][cc] = *(str + count);
		count++;
		cc++;
	}
	return out;
}
int main(int argc, char **argv)
{
	char **arr;
	int c = 0;
	int cc = 0;

	arr = split(argv[1]);
	while (c < 3)
	{
		while (cc < 5)
		{
			printf("%c",arr[c][cc]);
			cc++;
		}
		printf("\n");
		cc = 0; 
		c++;
	}

	return 0;
}
