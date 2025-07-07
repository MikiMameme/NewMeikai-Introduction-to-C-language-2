/* 同一型の二つの値を交換する関数形式マクロ */

#include<stdio.h>

#define swap(type, a,b) do { type t = a; a = b; b = t; } while (0)

int main()
{
	int x, y;
	double a, b;
	
	puts("二つの整数を入力してください。");
	printf("整数x:");	scanf("%d", &x);
	printf("整数y:");	scanf("%d", &y);
	swap(int, x, y);
	printf("交換しました。\nxは%dでyは%dです。\n", x, y);
	
	puts("\n二つの実数を入力してください。");
	printf("実数a:");	scanf("%lf", &a);
	printf("実数b:");	scanf("%lf", &b);
	swap(double, a, b);
	printf("交換しました。\naは%.3fで%.3fです。\n", a, b);
	
	return 0;
}