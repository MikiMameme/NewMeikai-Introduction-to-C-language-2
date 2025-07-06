/* 0.0‚©‚ç1.0‚Ü‚Å0.01’PˆÊ‚ÅŒJ‚è•Ô‚µ‚Ä•\Ž¦ */

#include<stdio.h>

int main(void)
{
	int i;
	float x = 0.0;
	
	for(i = 0; i <= 100; i++) {
		printf("x = %f x = %f\n", x, i / 100.0);
		x += 0.01;
	}
	return 0;
}