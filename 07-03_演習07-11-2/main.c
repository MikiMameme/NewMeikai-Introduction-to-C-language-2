/* 0.0から1.0まで0.01単位で繰り返して類型を求める(intによる繰り返し) */

#include<stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;
	
	for(i = 0; i <= 100; i++)
		sum += i / 100.0;
		
	printf("0.00, 0.01, 0.02, ..., 1.00の合計は%fです。\n", sum);
	
	return 0;
	
}
