/* 静的記憶期間を持つオブジェクトの暗黙の初期化を確認 */
#include<stdio.h>

int fx;

int main(void)
{
	int i;
	static int		si;
	static double	sd;
	static int		sa[5];
	
	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);
	
	for(i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);
		
	return 0;
}