/* �t�@�C�����̉��s�����̌����J�E���g���� */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int n_count = 0;
	
	printf("�t�A�C����:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\a�t�A�C�����J���܂���ł����B\n");
	else {
		while((ch = fgetc(fp)) != EOF)
		if(ch == '\n')
			n_count++;
		fclose(fp);
		
		printf("���̃t�A�C����%d�s�ł��B\n", n_count);
	}
	return 0;
}