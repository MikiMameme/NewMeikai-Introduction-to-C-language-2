/* ファイルをコピーする（バイナリファイル） */

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
	
	printf("コピ-元フアイル名:");	scanf("%s", sname);
	printf("コピ-先フアイル名:");	scanf("%s", dname);
	
	if((sfp = fopen(sname, "rb")) == NULL)
		printf("\aコピ-元フアイルを開けませんでした。\n");
	else {
		if((dfp = fopen(dname, "wb")) == NULL)
			printf("\aコピ-先フアイルを開けませんでした。\n");
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