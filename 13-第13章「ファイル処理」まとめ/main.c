/* �W�����͂���̓��͂��t�@�C���ɏ������� */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	
	printf("�R�s-��t�A�C����:");  /* �_�������΍� */
	scanf("%s\n", fname);
	
	if((fp = fopen(fname, "w")) == NULL)
		printf("\a�R�s-��t�A�C�����J���܂���ł����B\n");
	else {
		while((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);
	}
	return 0;
}