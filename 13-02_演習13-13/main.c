/* �t�@�C�����R�s�[����i�o�C�i���t�@�C���j */

#include<stdio.h>

#define BUF_SIZE 1024

int main(void)
{
	int n;
	char buf[BUF_SIZE];
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];
	
	printf("�R�s-���t�A�C����:");	scanf("%s", sname);
	printf("�R�s-��t�A�C����:");	scanf("%s", dname);
	
	if((sfp = fopen(sname, "rb")) == NULL)
		printf("\a�R�s-���t�A�C�����J���܂���ł����B\n");
	else {
		if((dfp = fopen(dname, "wb")) == NULL)
			printf("\a�R�s-��t�A�C�����J���܂���ł����B\n");
		else {
			while (1) {
				if((n = fread(buf, 1, BUF_SIZE, sfp)) != 0)
					fwrite(buf, 1, n, dfp);
				if(n < BUF_SIZE)
					break;
			}
			fclose(dfp);
		}
		fclose(sfp);
	}
	
	return 0;
}