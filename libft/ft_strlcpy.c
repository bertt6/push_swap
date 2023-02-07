#include "../push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize)
	{
		while ((dstsize--) - 1 && *src)
			*(dst++) = *(src++);
		*dst = 0;
	}
	return (srclen);
}
