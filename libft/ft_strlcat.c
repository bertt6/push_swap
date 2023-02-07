#include "../push_swap.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize)
	{
		while (*(dst + i) && i < dstsize)
			++i;
		ft_strlcpy(dst + i, src, dstsize - i);
	}
	return (srclen + i);
}
