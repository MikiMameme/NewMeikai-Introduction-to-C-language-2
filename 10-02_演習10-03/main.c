/* �O�̐����������ɕ��ׂ� */

#include<stdio.h>

/* px��py���w���I�u�W�F�N�g�̒l������ */
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/* *n1��n2��n3�ƂȂ�悤�ɕ��ׂ� */
void sort2(int *n1, int *n2, int *n3)
{
	if(*n1 > *n2)	swap(n1, n2);
	if(*n2 > *n3)	swap(n2, n3);
	if(*n1 > *n2)	swap(n1, n2);
}

int main(void)
{
	int na, nb, nc;
	
	puts("��̐�������͂��Ă��������B");
	printf("����A:");	scanf("%d", &na);
	printf("����B:");	scanf("%d", &nb);
	printf("����C:");	scanf("%d", &nc);
	
	sort2(&na, &nb, &nc);
	
	puts("�����ɂ��܂����B");
	printf("����A��%d�ł��B\n", na);
	printf("����B��%d�ł��B\n", nb);
	printf("����C��%d�ł��B\n", nc);
	
	return 0;
}