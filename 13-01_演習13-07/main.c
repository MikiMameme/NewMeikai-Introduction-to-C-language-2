/* �t�@�C�����̐��������̌����J�E���g���� */

#include<stdio.h>

int main(void)
{
	int i, ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int cnt[10] = {0};
	
	printf("�t�A�C����:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\a�t�A�C�����J���܂���ł����B\n");
	else {
		while((ch = fgetc(fp)) != EOF)
		if(ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
		fclose(fp);
		
		puts("���������̏o����");
		for(i = 0; i < 10; i++)
			printf("'%d' : %d\n", i, cnt[i]);
	}
	return 0;
}