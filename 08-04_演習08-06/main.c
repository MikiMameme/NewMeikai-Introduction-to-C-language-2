/* �K������߂� */

#include<stdio.h>

/* �K��l��Ԃ��i��ċA�Łj */
int factorial(int n)
{
	int f = 1;
	
	while(n > 0)
		f *= n--;
	return f;
}
int main(void)
{
	int num;
	
	printf("��������͂��Ă�������:");
	scanf("%d", &num);
	
	printf("%d�̊K���%d�ł��B\n", num, factorial(num));
	
	return 0;
}