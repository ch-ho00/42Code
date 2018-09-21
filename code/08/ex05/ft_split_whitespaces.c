#include <stdlib.h>

int		num_words(char *s)
{
	int c;
	int out;

	c = 0;
	out = 1;
	while (s[c] != '\0')
	{
		if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
			if (!(s[c + 1] == ' ' || s[c + 1] == '\t' || s[c + 1] == '\n'))
				out++;
		c++;
	}
	return (out);
}

int		length_nthword(char *s, int n)
{
	int tmp;
	int c;
	int enter;

	c = 0;
	tmp = 1;
	enter = 0;
	while (s[c] != '\0')
	{
		while (tmp == n && !(s[c] == ' ') && !(s[c] == '\t') && !(s[c] == '\n'))
		{
			c++;
			enter++;
		}
		if (enter)
			break ;
		if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
			if (!(s[c + 1] == ' ' || s[c + 1] == '\t' || s[c + 1] == '\n'))
				tmp++;
		c++;
	}
	return (enter);
}

char	*nth_word(char *s, int n)
{
	int		c;
	int		tmp;
	char	*out;
	int		enter;

	c = 0;
	enter = 0;
	tmp = 1;
	out = (char *)malloc(sizeof(char) * length_nthword(s, n + 1));
	while (s[c] != '\0')
	{
		while (tmp == n && s[c] != ' ' && s[c] != '\t' && s[c] != '\n')
		{
			out[enter] = s[c];
			enter++;
			c++;
		}
		if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
			if (!(s[c + 1] == ' ' || s[c + 1] == '\t' || s[c + 1] == '\n'))
				tmp++;
		c++;
	}
	return (out);
}

char	*cat(char *s)
{
	int c;

	c = 0;
	while ((s[c] == ' ') || (s[c] == '\t') || (s[c] == '\n'))
		c++;
	return (&s[c]);
}

char	**ft_split_whitespaces(char *s)
{
	int		c;
	int		word;
	char	**out;
	char	*ctmp;

	ctmp = cat(s);
	word = num_words(ctmp);
	out = (char **)malloc(sizeof(char *) * (word + 1));
	c = 0;
	while (c < word)
	{
		out[c] = nth_word(ctmp, c + 1);
		c++;
	}
	out[c] = 0;
	return (out);
}
