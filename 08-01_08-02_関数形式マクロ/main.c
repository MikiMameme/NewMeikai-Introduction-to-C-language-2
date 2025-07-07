/* 整数の2乗と浮動小数点の二乗(関数形式マクロ) */

#include<stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
	int    n;
	double x;
	
	printf("整数を入力してください :");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr(n));
	
	printf("実数を入力してください :");
	scanf("%lf", &x);
	printf("その数の2乗は%fです。\n", sqr(x));
	
	return 0;
}