/* ��������󕶎��ɂ���֐� */

#include<stdio.h>

/* ������s���󕶎���ɂ��� */
void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	printf("������str��\"%s\"�ł��B\n", str);
	null_string(str);
	printf("������str�͋󕶎�\"%s\"�ɂ��܂����B\n", str);
	
	return 0;
}