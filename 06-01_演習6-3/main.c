/* 整数の3乗値を求める */
#include<stdio.h>

/* xの3乗値を返す */
int cube(int x)
{
	return x * x * x;
}
int main (void)
{
	int n;
	
	printf("整数値 :");
	scanf("%d", &n);
	
	printf("%dの3乗は%dです。\n", n, cube(n));
	
	return 0;
}