/* zñÌvfðßé */
#include<stdio.h>

int main(void)
{
	int		vi[10];
	double	vd[25];
	
	printf("zñviÌvf=%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("zñvdÌvf=%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));
	
	return 0;
}