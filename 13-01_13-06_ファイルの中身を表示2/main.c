/* ファイルの中身を表示する */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	
	printf("フアイル名:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\aフアイルを開くことができません。\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}
	return 0;
}