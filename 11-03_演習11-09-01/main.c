/* strlen�֐��̗��p�� */

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	printf("������\"%s\"�̒�����%u�ł��B\n", str, (unsigned)strlen(str));
	
	return 0;
}