/* 0.0から1.0まで0.01単位で繰り返して類型を求める(floatによる繰り返し) */

#include<stdio.h>

int main(void)
{
	float x, sum = 0.0;
	
	for(x = 0.0; x <= 1.0; x += 0.01)
		sum += x;
		
	printf("0.00, 0.01, 0.02, ..., 1.00の合計は%fです。\n", sum);
	
	return 0;
	
}
