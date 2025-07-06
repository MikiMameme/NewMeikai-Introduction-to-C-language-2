/* 浮動小数点の変数の値を表示 */

#include<stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;
	
	puts("3個の実数値を入力してください。");
	printf("float型       a");	scanf("%f", &a);
	printf("double型      b");	scanf("%lf", &b);
	printf("long double型 c");	scanf("%Lf", &c);
	
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("C = %f\n", c);
	
	return 0;
}