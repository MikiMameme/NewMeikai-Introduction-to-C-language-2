/* 符号無し整数の算術演算がオーバーフローを起こさないことを確認する */

#include<stdio.h>
#include<limits.h>

int main(void)
{
	unsigned a;
	unsigned b;
	
	puts("符号無し整数値の和と積を求めます。");
	printf("UINT_MAXは%uです。\n", UINT_MAX);
	printf("UINT_MAXを超えた演算結果は(UINT_MAX + 1)で割った剰余となります。\n");
	printf("a:");	scanf("%u", &a);
	printf("b:");	scanf("%u", &b);
	
	printf("a + b = %u\n", a + b);
	printf("a * b = %u\n", a * b);
	
	return 0;
}