/* ���[�N���b�h�̌ݏ��@�ɂ���čő���񐔂����߂� */

#include<stdio.h>

/* �����lx�Ay�̍ő���񐔂�ԋp���� */
int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void)
{
	int x, y;
	
	puts("��̐����̍ő���񐔂����߂܂��B");
	
	printf("��������͂���:");	scanf("%d", &x);
	printf("��������͂���:");	scanf("%d", &y);
	
	printf("�ő���񐔂�%d�ł��B\n", gcd(x, y));
	
	return 0;
}