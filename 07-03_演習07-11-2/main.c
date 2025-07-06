/* 0.0‚©‚ç1.0‚Ü‚Å0.01’PˆÊ‚ÅŒJ‚è•Ô‚µ‚Ä—ŞŒ^‚ğ‹‚ß‚é(int‚É‚æ‚éŒJ‚è•Ô‚µ) */

#include<stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;
	
	for(i = 0; i <= 100; i++)
		sum += i / 100.0;
		
	printf("0.00, 0.01, 0.02, ..., 1.00‚Ì‡Œv‚Í%f‚Å‚·B\n", sum);
	
	return 0;
	
}
