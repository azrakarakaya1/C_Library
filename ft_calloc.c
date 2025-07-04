#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ret;

    ret = malloc(count * size);
    if (ret)
        ft_bzero(ret, count * size);
    return (ret);
}