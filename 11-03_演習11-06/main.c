/* ������ɓ��蕶�����܂܂�Ă��邩�ǂ����𒲂ׂ�֐� */

#include<stdio.h>

/* ������s���當��c���������čł��擪���̕����փ|�C���^��Ԃ� */
const char *str_chr(const char *s, int c)
{
	while(*s) {
		if(*s == c)
			return s;
		s++;
	}
	return NULL;
}

int main(void)
{
	char str[256];
	char ch[10];
	const char *p;
	
	printf("���������͂��Ă�������:");
	scanf("%s", str);
	
	printf("�������镶����:");
	scanf("%s", ch);
	
	if((p = str_chr(str, ch[0])) == NULL)
		printf("���̕����͊܂܂�Ă��܂���B\n");
	else
		printf("����ȍ~�̕�����%s�ł��B\n", p);
		
	return 0;
}