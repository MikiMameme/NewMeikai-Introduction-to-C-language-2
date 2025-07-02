/* 静的記憶期間をもつオブジェクトの暗黙の初期化を確認する */
#include<stdio.h>

double a1[5];

int main(void)
{
	int i;
	static double a2[5];
	
	for(i = 0; i < 5; i++)
		printf("a1[%d] = %1f\n", i, a1[i]);
	
	for(i = 0; i < 5; i++)
		printf("a2[%d] = %.1f\n", i, a2[i]);
		
		return 0;
}