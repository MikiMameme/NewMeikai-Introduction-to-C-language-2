/* ������𑀍삷��֐��Q */

#include<stdio.h>

/* ������s�̒��̕���c�̌���Ԃ� */
int str_chnum(const char s[], int c)
{
	int i, count = 0;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] == c)
			count++;
	return count;
}

/* ������s��n��\������ */
void put_stringn(const char s[], int n)
{
	while(n-- > 0)
		printf("%s", s);
}

/* ������s�̒�����Ԃ� */
int str_length(const char s[])
{
	int len = 0;
	while(s[len])
		len++;
	return len;
}

/* ������s���t����\�� */
void put_stringr(const char s[])
{
	int i = str_length(s);
	while(i-- > 0)
		putchar(s[i]);
}

/* ������s�̕����̕��т𔽓]���� */
void rev_string(char s[])
{
	int i, len = str_length(s);
	for(i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i]      = s[len-i-1];
		s[len-i-1]= temp;
	}
}

int main(void)
{
	char str[256], ch[256];
	
	printf("������str����͂��Ă�������:");
	scanf("%s", str);
	
	printf("����ch����͂��Ă�������:");
	scanf("%s", ch);
	
	printf("str�ɂ�ch��%d�܂܂�Ă��܂��B\n", str_chnum(str, ch[0]));
	
	printf("str���t����ǂނ�:");
	put_stringr(str);
	putchar('\n');
	
	rev_string(str);
	
	printf("str�𔽓]���܂����B5�񔽓]���܂��B\n");
	put_stringn(str, 5);
	putchar('\n');
	
	return 0;
}