/* ��̐����̘a�ƍ������߂�i�ԈႢ�A0�̂܂܏o�͂����j */
/* ����́A�|�C���^�̕K�v����������邽�߂ɂ킴�ƊԈႦ�Ă���R�[�h�ł��� */

#include<stdio.h>

/* n1��n2�̘a�ƍ���sum��diff�Ɋi�[�i�ԈႢ�j */
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}
int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;
	
	puts("��̐�������͂��Ă��������B");
	printf("����A:");	scanf("%d", &na);
	printf("����B:");	scanf("%d", &nb);
	
	sum_diff(na, nb, wa, sa);					/* wa��sa�͍ŏ�����Ō�܂�0�̂܂� */
	
	printf("�a��%d�ō���%d�ł��B\n", wa, sa);	/* �a�ƍ���0�̂܂� */
	
	return 0;
}