/* ��̐����l�̍������߂�֐��`���}�N�� */

#include<stdio.h>

/* x��y�̍������߂�֐��`���}�N�� */
#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void)
{
	int a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("����a :");	scanf("%d", &a);
	printf("����b :");	scanf("%d", &b);
	
	printf("�����̍���%d�ł��B\n", diff(a, b));
	
	return 0;
}