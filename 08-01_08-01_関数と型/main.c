/* ������2��ƕ��������_��2��i�֐��j */

#include<stdio.h>

/* int�^�̐�����2��l�����߂� */
int sqr_int(int x)
{
	return x * x;
}

/* double�^���������_��2��l�����߂� */
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int    n;
	double x;
	
	printf("��������͂��Ă��������B:");
	scanf("%d", &n);
	printf("���̐���2���%d�ł��B\n", sqr_int(n));
	
	printf("��������͂��Ă��������B:");
	scanf("%lf", &x);
	printf("���̐���2���%f�ł��B\n", sqr_double(x));
	
	return 0;
}