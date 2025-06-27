/* 整数の4乗値を求める */

#include<stdio.h>

/* xの2乗値を返す */
int sqr(int x)
{
	return x * x;
}
/* xの4乗値を返す */
int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n;
	
	printf("整数値 :");
	scanf("%d", &n);
	
	printf("%dの4乗は%dです。\n", n, pow4(n));
	
	
	return 0;
}