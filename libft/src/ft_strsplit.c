#include "libft.h"

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	l;

	l = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s && *s == c)
				s++;
		}
		else
		{
			l++;
			while (*s && *s != c)
				s++;
		}
	}
	return (l);
}

static char			*get_word(const char **s, char c)
{
	const char		*ptr;
	char			*r;
	unsigned int	n;

	while (**s && **s == c)
		(*s)++;
	ptr = *s;
	while (*ptr && *ptr != c)
		ptr++;
	n = ptr - *s;
	r = ft_strsub(*s, 0, n);
	*s = ptr;
	return (r);
}

char	**ft_strsplit(const char *s, char c)
{
	char			**r;
	unsigned int	i;
	unsigned int	l;

	l = count_words(s, c);
	PS("word count: "); PN(l); NL;
	r = MEMALLOC(char*, l + 1);
	PS("mallocked for "); PN(l + 1); PE(" words");
	i = 0;
	while (i < l)
	{
		r[i] = get_word(&s, c);
		PS("word #"); PN(i); NL; PS(r[i]); PE("@@->");
		i++;
	}
	//r[i] = 0;
	return (r);
}