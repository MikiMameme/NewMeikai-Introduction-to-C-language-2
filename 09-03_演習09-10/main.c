/* �����񒆂̕����������폜���� */

#include<stdio.h>

/* ������s���̐����������폜���� */
void del_digit(char s[])
{
	int i = 0, idx = 0;
	
	while(s[i]) {
		if(s[i] < '0' || s[i] > '9')	/* ���������łȂ���� */
			s[idx++] = s[i];
		i++;
	}
	s[idx] = '\0';
}

int main(void)
{
	char str[256];
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	del_digit(str);						/* ��������̕����������폜 */
	
	puts("�����������폜���܂����B");
	printf("str=%s\n", str);
	
	return 0;
}