/* ������3��l�����߂� */
#include<stdio.h>

/* x��3��l��Ԃ� */
int cube(int x)
{
	return x * x * x;
}
int main (void)
{
	int n;
	
	printf("�����l :");
	scanf("%d", &n);
	
	printf("%d��3���%d�ł��B\n", n, cube(n));
	
	return 0;
}