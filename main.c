#include "libft.h"
#include <stdio.h>

char *src = "/|\x12\xff\x09\x42\042\42|\\";
int size = 10;

int main(void)
{
    char *ret;
	char *org;

    ret = (char *)ft_memchr(src, '\x42', size);
	org = memchr(src, '\x42', size);
    printf("%s\n", ret);
	printf("%s\n", org);
}
