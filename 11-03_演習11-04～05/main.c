/* �������\���E������Ɋ܂܂����蕶���̌��𒲂ׂ� */

#include<stdio.h>

/* ������a��\���i���s�����͏o�͂��Ȃ��j */
void put_string(const char *s)
{
	while(*s)
		putchar(*s++);
}
/* ������s�̒��̕���c�̌���Ԃ� */
int str_chnum(const char *s, int c)
{
	int count = 0;
	
	while(*s)
		if(*s++ == c)
			count++;
	return count;
}

int main(void)
{
	char str[256];
	char ch[10];
	
	printf("���������͂����Ă�������:");
	scanf("%s", str);
	
	put_string(str);
	printf("����J�E���g����̂�:");
	scanf("%s", ch);
	
	printf("���̕�����%d�܂܂�Ă��܂��B\n", str_chnum(str, ch[0]));
	
	return 0;
}