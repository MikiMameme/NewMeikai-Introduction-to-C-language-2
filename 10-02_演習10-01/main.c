/* �󂯎�����������O�`�P�O�O�Ɏ��܂�悤�ɒ������� */

#include<stdio.h>

/* �󂯎�����������O�`�P�O�O�Ɏ��܂�悤�ɒ������� */
void adjust_point(int *n)
{
	if(*n < 0) *n = 0;
	if(*n > 100) *n = 100;
}

int main(void)
{
	int point;
	
	printf("�e�X�g�̓_��:");
	scanf("%d", &point);
	
	adjust_point(&point);
	
	printf("�_����%d�_�ł��B\n", point);
	
	return 0;
}