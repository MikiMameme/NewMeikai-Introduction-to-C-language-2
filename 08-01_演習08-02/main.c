/* 二つの整数値の大きいほうの値を求める関数形式マクロ */

#include<stdio.h>

/* xとyの大きいほうの値を求める関数形式マクロ */
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a, b, c, d;
	
	puts("四つの整数を入力してください。");
	printf("整数a:");	scanf("%d", &a);
	printf("整数b:");	scanf("%d", &b);
	printf("整数c:");	scanf("%d", &c);
	printf("整数d:");	scanf("%d", &d);
	
	printf("最大値は%dです。\n", max(max(a, b), max(c, d)));  /* どっちが効率良い？ */
	printf("最大値は%dです。\n", max(max(max(a, b), c), d));
	
	return 0;
}