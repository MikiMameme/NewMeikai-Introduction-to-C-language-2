/* ������4��l�����߂� */

#include<stdio.h>

/* x��2��l��Ԃ� */
int sqr(int x)
{
	return x * x;
}
/* x��4��l��Ԃ� */
int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n;
	
	printf("�����l :");
	scanf("%d", &n);
	
	printf("%d��4���%d�ł��B\n", n, pow4(n));
	
	
	return 0;
}