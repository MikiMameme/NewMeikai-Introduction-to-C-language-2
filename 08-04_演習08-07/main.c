/* �g�ݍ��킹�̐������߂� */

#include<stdio.h>

/* �قȂ�n����r�̐��������o���g�ݍ��킹�̐���Ԃ� */
int combination(int n, int r)
{
	if(r == 0 || r == n)
		return 1;
	else if(r == 1)
		return n;
	return combination(n - 1, r - 1) + combination(n - 1 , r);
}

int main(void)
{
	int n, r;
	
	puts("�قȂ�n����r�̐��������o���g�ݍ��킹�̐������߂܂��B");
	printf("n:"); scanf("%d", &n);
	printf("r:"); scanf("%d", &r);
	printf("�g�ݍ��킹�̐���%d�ł��B\n", combination(n, r));
	
	return 0;
}