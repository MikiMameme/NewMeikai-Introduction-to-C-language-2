/* ��������̉p����啶��/�������ɕϊ� */

#include<stdio.h>
#include<ctype.h>

/* ��������̉p����啶���ɕϊ� */
void str_toupper(char *s)
{
	while(*s) {
		*s = toupper(*s);
		s++;
	}
}

/* ��������̉p�����������ɕϊ� */
void str_tolower(char *s)
{
	while(*s) {
		*s = tolower(*s);
		s++;
	}
}

int main(void)
{
	char str[128];
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	str_toupper(str);
	printf("�啶��:%s\n", str);
	
	str_tolower(str);
	printf("������:%s\n", str);
	
	return 0;
}