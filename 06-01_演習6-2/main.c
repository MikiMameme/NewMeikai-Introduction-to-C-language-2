/* �O�̐����̍ŏ��l�����߂� */
#include<stdio.h>

/* �O�̐����̍ŏ��l��Ԃ� */
int min3(int a, int b, int c)
{
	int min = a;
	
	if(b < min) min = b;
	if(c < min) min = c;
	return min;
}
int main(void)
{
	int a, b, c;
	
	puts("�O�̐�������͂��Ă��������B");
	printf("����a :");	scanf("%d", &a);
	printf("����b :");	scanf("%d", &b);
	printf("����c :");	scanf("%d", &c);
	
	printf("�ŏ��l��%d�ł��B\n", min3(a, b, c));
	
	
	return 0;
}