/* �����񒆂̐����������폜���� */

#include<stdio.h>

/* ������str���̐����������폜���� */
void del_digit(char *str)
{
	char *ptr = str;
	
	while(*str) {
		if(*str < '0' || *str > '9')
			*ptr++ = *str;
		str++;
	}
	*ptr = '\0';
}

int main(void)
{
	char str[256];
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	del_digit(str);
	
	puts("�����������폜���܂����B");
	printf("str=%s\n", str);
	
	return 0;
}