/* �A���[�g���J��Ԃ������� */
#include<stdio.h>

/* ����ch��n�A�����ĕ\�� */
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

/* ����ch��n�A�����ĕ\�����ĉ��s */
void put_chars_ln(int ch, int n)
{
	put_chars(ch, n);				/* ����ch��n�A�����ĕ\�� */
	putchar('\n');					/* ���s */
}

/* �A���[�g��n��A�����Ĕ����� */
void alert(int n)
{
	put_chars('\a', n);				/* �x�񕶎���n�A�����ĕ\�� */
}

int main(void)
{
	
	int n;
	
	put_chars_ln('=', 24);			/* '='��24�\�����ĉ��s */
	printf("�x��𔭂���� :");
	scanf("%d", &n);
	put_chars_ln('-', 24);			/* '-'��24�\�����ĉ��s */
	
	alert(n);						/* �x���n��o�� */
	putchar('\n');
	
	put_chars_ln('=', 24);			/* '='��24�\�����ĉ��s */
	
	return 0;
}