/* �t�@�C���̒��g��\������ */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	
	printf("�t�A�C����:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\a�t�A�C�����J�����Ƃ��ł��܂���B\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}
	return 0;
}