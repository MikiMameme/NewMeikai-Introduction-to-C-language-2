/* ������ɓ��蕶�����܂܂�Ă��邩�ǂ����𒲂ׂ�֐� */

#include<stdio.h>

/* ������s�̒��ɍł��擪�Ɉʒu���镶��c��T�� */
int str_char(const char s[], int c)
{
	int i;
	
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] == c)
			return i;
	return -1;
}
int main(void)
{
	int no;
	char ch[10];
	
	printf("�p��������͂��Ă�������:");
	scanf("%s", ch);
	
	no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				  "abcdefghijklmnopqrstuvwxyz", ch[0]);
				  
	if(no >= 0 && no <= 25)
		printf("����͉p�啶����%d�Ԗڂł��B\n", no + 1);
	else if(no >= 26 && no <= 51)
		printf("����͉p��������%d�Ԗڂł��B\n", no - 25);
	else
		printf("����͉p�����ł͂���܂���B\n");
		
		return 0;
}