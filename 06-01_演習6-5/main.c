/* 1����n�܂ł̘a�����߂� */
#include<stdio.h>

/* 1����n�܂ł̘a��Ԃ� */
int sumup(int n)
{
	int i;
	int sum = 0;
	
	for(i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int no;
	
	printf("�����l :");
	scanf("%d", &no);
	
	printf("1����%d�܂ł̘a��%d�ł��B\n", no, sumup(no));
	
	return 0;
}