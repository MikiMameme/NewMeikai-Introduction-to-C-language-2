/* ������2��ƕ��������_�̓��(�֐��`���}�N��) */

#include<stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
	int    n;
	double x;
	
	printf("��������͂��Ă������� :");
	scanf("%d", &n);
	printf("���̐���2���%d�ł��B\n", sqr(n));
	
	printf("��������͂��Ă������� :");
	scanf("%lf", &x);
	printf("���̐���2���%f�ł��B\n", sqr(x));
	
	return 0;
}