/* ��̐����̏������ق��̒l�����߂� */
#include<stdio.h>

/* ��̐����̏������ق��̒l��Ԃ� */
int min2(int a, int b)
{
	return (a < b) ? a : b;
}
int main(void)
{
	int n1, n2;
	
	puts("��̐�������͂��Ă�������");
	printf("����1 :");	scanf("%d", &n1);
	printf("����1 :");	scanf("%d", &n2);
	
	printf("�������ق��̒l��%d�ł��B \n", min2(n1, n2));
	
	return 0;
}

