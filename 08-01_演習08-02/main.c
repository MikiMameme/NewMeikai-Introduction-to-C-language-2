/* ��̐����l�̑傫���ق��̒l�����߂�֐��`���}�N�� */

#include<stdio.h>

/* x��y�̑傫���ق��̒l�����߂�֐��`���}�N�� */
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a, b, c, d;
	
	puts("�l�̐�������͂��Ă��������B");
	printf("����a:");	scanf("%d", &a);
	printf("����b:");	scanf("%d", &b);
	printf("����c:");	scanf("%d", &c);
	printf("����d:");	scanf("%d", &d);
	
	printf("�ő�l��%d�ł��B\n", max(max(a, b), max(c, d)));  /* �ǂ����������ǂ��H */
	printf("�ő�l��%d�ł��B\n", max(max(max(a, b), c), d));
	
	return 0;
}