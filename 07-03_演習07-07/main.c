/* ���������_�̕ϐ��̒l��\�� */

#include<stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;
	
	puts("3�̎����l����͂��Ă��������B");
	printf("float�^       a");	scanf("%f", &a);
	printf("double�^      b");	scanf("%lf", &b);
	printf("long double�^ c");	scanf("%Lf", &c);
	
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("C = %f\n", c);
	
	return 0;
}