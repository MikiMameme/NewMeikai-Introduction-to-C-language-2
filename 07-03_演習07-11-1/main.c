/* 0.0‚©‚ç1.0‚Ü‚Å0.01’PˆÊ‚ÅŒJ‚è•Ô‚µ‚Ä—ŞŒ^‚ğ‹‚ß‚é(float‚É‚æ‚éŒJ‚è•Ô‚µ) */

#include<stdio.h>

int main(void)
{
	float x, sum = 0.0;
	
	for(x = 0.0; x <= 1.0; x += 0.01)
		sum += x;
		
	printf("0.00, 0.01, 0.02, ..., 1.00‚Ì‡Œv‚Í%f‚Å‚·B\n", sum);
	
	return 0;
	
}
