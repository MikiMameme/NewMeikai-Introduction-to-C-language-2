/* �t�@�C���̒��g����������啶���ɕϊ����Ȃ���R�s�[���� */

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];
	
	printf("�R�s-���t�A�C����:");	scanf("%s", sname);
	printf("�R�s-��t�A�C����:");	scanf("%s", dname);
	
	if((sfp = fopen(sname, "r")) == NULL)
		printf("\a�R�s-���t�A�C�����J���܂���ł����B\n");
	else {
		if((dfp = fopen(dname, "w")) == NULL)
			printf("\a�R�s-��t�A�C�����J���܂���ł����B\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				fputc(toupper(ch), dfp);
			fclose(dfp);
		}
		fclose(dfp);
	}
	
	return 0;
}